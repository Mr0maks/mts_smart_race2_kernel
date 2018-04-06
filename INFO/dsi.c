//WORK ????
static void lcm_get_params(LCM_PARAMS * params)
{

  memset(params, 0, sizeof(LCM_PARAMS));
	
  params->width = 121;
  params->dpi.hsync_back_porch = 12;
  params->dpi.hsync_front_porch = 12;
  params->ctrl = 68;
  params->.dpi.vsync_pol = 256;
  params->dpi.vsync_front_porch = 5;
  params->dpi.format = 30;
  params->dpi.rgb_order = 140;
  params->dsi.TA_SACK = 216;
  params->dpi.vsync_front_porch = 10;
  params->dpi.vsync_front_porch = -100;
  params->type = 2;
  params->dbi.parallel.wait_period = 2;
  params->dpi.dpi_clk_div = 2;
  params->dpi.dpi_clk_duty = 2;
  params->dpi.clk_pol = 2;
  params->dpi.hsync_pulse_width = 2;
  params->dbi.clock_freq = 480;
  params->dpi.intermediat_buffer_num = 480;
  params->dbi.data_width = 854;
  params->dpi.vsync_back_porch = 854;
  params->dbi.serial.is_non_dbi_mode = 0;
  params->dbi.parallel.read_latency = 0;
  params->dpi.mipi_pll_clk_ref = 0;
  params->dpi.mipi_pll_clk_div1 = 0;
  params->dpi.mipi_pll_clk_div2 = 0;
  params->dbi.parallel.write_setup = 1;
  params->dpi.de_pol = 1;
  params->dpi.clk_pol = 1;
  params->dpi.vsync_front_porch = 1;
  return LCM_PRINT("[LCD] lcm_get_params \n");
}
