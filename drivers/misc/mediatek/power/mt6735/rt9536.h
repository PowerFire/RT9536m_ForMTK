extern void rt9536_set_en_set_pin(u32 level);

extern void rt9536_get_pgb_pin(u32 *level);

extern void rt9536_get_chgsb_pin(u32 *level);


extern void set_rt9536_V42_USB100_mode(void);
extern void set_rt9536_V42_USB500_mode(void); //extern void charging_ic_active_default(void);
extern void set_rt9536_V42_ISET_mode(void);
extern void set_rt9536_V42_Factory_mode(void);
extern void set_rt9536_V43_USB100_mode(void);
extern void set_rt9536_V43_USB500_mode(void);
extern void set_rt9536_V43_ISET_mode(void);
extern void set_rt9536_V43_Factory_mode(void);

//extern void charging_ic_deactive(void);
extern void rt9536_charging_enable(unsigned int set_current, unsigned int enable);
//extern char rt9536_check_eoc_status(void);
extern int rt9536_disable_charging(void);
extern unsigned int switch_charging_mode_to_mtk( unsigned int mode);
//extern int rt9536_check_charger_status(void);
//extern unsigned int switch_charging_mode(struct richtek_rt9536_chip *chip, unsigned int mode);
