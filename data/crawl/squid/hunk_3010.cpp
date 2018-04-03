     CPPUNIT_ASSERT_EQUAL(0, output.v_min);
     input.reset();
 
+    // negative major version (bug 3062)
+    input.append("GET / HTTP/-999999.1\n", 21);
+    //printf("TEST: '%s'\n",input.content());
+    HttpParserInit(&output, input.content(), input.contentSize());
+    CPPUNIT_ASSERT_EQUAL(-1, HttpParserParseReqLine(&output));
+    CPPUNIT_ASSERT_EQUAL(HTTP_HTTP_VERSION_NOT_SUPPORTED, output.request_parse_status);
+    CPPUNIT_ASSERT_EQUAL(0, output.req_start);
+    CPPUNIT_ASSERT_EQUAL((int)input.contentSize()-1, output.req_end);
+    CPPUNIT_ASSERT(memcmp("GET / HTTP/-999999.1\n", &output.buf[output.req_start],(output.req_end-output.req_start+1)) == 0);
+    CPPUNIT_ASSERT_EQUAL(0, output.m_start);
+    CPPUNIT_ASSERT_EQUAL(2, output.m_end);
+    CPPUNIT_ASSERT(memcmp("GET", &output.buf[output.m_start],(output.m_end-output.m_start+1)) == 0);
+    CPPUNIT_ASSERT_EQUAL(4, output.u_start);
+    CPPUNIT_ASSERT_EQUAL(4, output.u_end);
+    CPPUNIT_ASSERT(memcmp("/", &output.buf[output.u_start],(output.u_end-output.u_start+1)) == 0);
+    CPPUNIT_ASSERT_EQUAL(6, output.v_start);
+    CPPUNIT_ASSERT_EQUAL(19, output.v_end);
+    CPPUNIT_ASSERT(memcmp("HTTP/-999999.1", &output.buf[output.v_start],(output.v_end-output.v_start+1)) == 0);
+    CPPUNIT_ASSERT_EQUAL(0, output.v_maj);
+    CPPUNIT_ASSERT_EQUAL(0, output.v_min);
+    input.reset();
+
     // no minor version
     input.append("GET / HTTP/1.\n", 14);
     //printf("TEST: '%s'\n",input.content());
