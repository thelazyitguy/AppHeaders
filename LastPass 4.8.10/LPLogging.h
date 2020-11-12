//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LPLogger;

@interface LPLogging : NSObject
{
    NSObject<LPLogger> *_diagnosticLogger;
    NSObject<LPLogger> *_apiLogger;
}

+ (void)logDeviceConfiguration;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<LPLogger> *apiLogger; // @synthesize apiLogger=_apiLogger;
@property(readonly, nonatomic) NSObject<LPLogger> *diagnosticLogger; // @synthesize diagnosticLogger=_diagnosticLogger;
- (id)fileLoggerForSubdirectory:(id)arg1;
- (id)simpleLogger;
- (void)configureDiagnosticLoggingIfEnabled;
- (void)configure;
- (_Bool)isDiagnosticLoggingEnabled;
@property(nonatomic) _Bool diagnosticLoggingEnabled;
- (id)init;

@end
