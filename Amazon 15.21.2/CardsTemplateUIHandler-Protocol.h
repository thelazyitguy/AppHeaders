//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CardsItemModel, NSString;

@protocol CardsTemplateUIHandler <NSObject>
- (void)logLatency:(NSString *)arg1 latency:(double)arg2;
- (void)clearTimerATFRenderingTime;
- (void)stopTimerATFRenderingTime:(NSString *)arg1;
- (void)startTimerATFRenderingTime:(NSString *)arg1;
- (void)logMetric:(NSString *)arg1;
- (void)itemSelected:(CardsItemModel *)arg1;
@end

