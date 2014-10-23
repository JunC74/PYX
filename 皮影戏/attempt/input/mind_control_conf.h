#ifndef __MIND_CONTROL_CONF_H__
#define __MIND_CONTROL_CONF_H__

namespace AttemptSpace
{
	enum MindControlSymbol
        {
			DATA_POOR_SIGNAL  	= 1,	// 信号质量
			DATA_ATTENTION		= 2,	// 注意力
			DATA_MEDITATION		= 3, 	// 冥想值
			DATA_RAW			= 4, 
			DATA_DELTA 			= 5,
			DATA_THETA			= 6,
			DATA_ALPHA1			= 7,
			DATA_ALPHA2 		= 8,
			DATA_BETA1			= 9,
			DATA_BETA2			= 10,
			DATA_GAMMA1			= 11,
			DATA_GAMMA2			= 12,
			DATA_BLINK_STRENGTH = 37,	// 眨眼力度
        };
}	// end namespace AttemptSpace

#endif	// end define __MIND_CONTROL_CONF_H__