//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GTEClearcutLogger, GTEStreamzLogger;
@protocol AVELoggingService, GTEPerformanceLogger;

@protocol GTELoggers
@property(readonly, nonatomic) id <GTEPerformanceLogger> performanceLogger;
@property(readonly, nonatomic) GTEClearcutLogger *clearcutLogger;
@property(readonly, nonatomic) GTEStreamzLogger *streamzLogger;
@property(readonly, nonatomic) id <AVELoggingService> veLogger;
@end
