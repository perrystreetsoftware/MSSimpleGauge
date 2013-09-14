//
//  PBGauge.h
//  SimpleGauge
//
//  Created by Mike Sabatini on 1/30/13.
//  Copyright (c) 2013 Mike Sabatini. All rights reserved.
//

#import "MSSimpleGaugeSubclass.h"

@interface MSAnnotatedGauge : MSSimpleGauge
@property (nonatomic, strong) NSNumberFormatter *valueFormatter;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *valueLabel;
@property (nonatomic, strong) UILabel *startRangeLabel;
@property (nonatomic, strong) UILabel *endRangeLabel;
@end
