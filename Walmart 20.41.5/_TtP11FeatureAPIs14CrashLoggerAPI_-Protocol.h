//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSError, NSException, NSString;

@protocol _TtP11FeatureAPIs14CrashLoggerAPI_
- (void)updateExperimentList:(NSArray *)arg1 for:(long long)arg2 tableName:(NSString *)arg3;
- (void)setVisitorId:(NSString *)arg1 withName:(NSString *)arg2 andEmail:(NSString *)arg3;
- (void)setSessionTab:(id)arg1 forLoggerKey:(long long)arg2;
- (void)setSessionTab:(id)arg1 forKey:(NSString *)arg2;
- (void)setUserTab:(id)arg1 forLoggerKey:(long long)arg2;
- (void)setUserTab:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forLoggerKey:(long long)arg2 tabName:(NSString *)arg3;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2 tabName:(NSString *)arg3;
- (void)simulateCrash;
- (void)notifyException:(NSException *)arg1;
- (void)notifyError:(NSError *)arg1;
@end

