void wt_shortstatus_print(struct wt_status *s);
void wt_porcelain_print(struct wt_status *s);

__attribute__((format (printf, 3, 4)))
void status_printf_ln(struct wt_status *s, const char *color, const char *fmt, ...);
__attribute__((format (printf, 3, 4)))
void status_printf(struct wt_status *s, const char *color, const char *fmt, ...);

#endif /* STATUS_H */