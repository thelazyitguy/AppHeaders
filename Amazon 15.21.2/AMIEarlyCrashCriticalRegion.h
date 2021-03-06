//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUserDefaults;
@protocol AMIEarlyCrashReporterProtocol;

@interface AMIEarlyCrashCriticalRegion : NSObject
{
    _Bool _isInRegion;
    id <AMIEarlyCrashReporterProtocol> _earlyCrashReporter;
    NSMutableArray *_startStack;
    NSString *_keyForStartStack;
    NSUserDefaults *_defaults;
}

+ (id)setupAndEnterRegion:(id)arg1;
+ (id)setupUniqueRegion:(id)arg1;
+ (id)setupRegion:(id)arg1;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSString *keyForStartStack; // @synthesize keyForStartStack=_keyForStartStack;
@property(retain, nonatomic) NSMutableArray *startStack; // @synthesize startStack=_startStack;
@property(nonatomic) _Bool isInRegion; // @synthesize isInRegion=_isInRegion;
@property(retain, nonatomic) id <AMIEarlyCrashReporterProtocol> earlyCrashReporter; // @synthesize earlyCrashReporter=_earlyCrashReporter;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)emptyAndRemoveStartStackFromDisk;
- (void)pushStartToStartStack;
- (void)popStartOffStartStack;
- (id)initWithStartStack:(id)arg1 keyForStartStack:(id)arg2 defaults:(id)arg3;
- (id)startStackForMetricsLogging;
- (void)leaveRegion;
- (void)enterRegion;

@end

