//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSLogger.h>

@interface SCSKnowledgeLogger : SCSLogger
{
    long long _knowledgeConnectionCount;
}

+ (void)debug:(id)arg1;
+ (void)error:(id)arg1 severity:(long long)arg2;
+ (void)connectivityStatus:(unsigned long long)arg1;
+ (void)appIsBackgrounded:(_Bool)arg1;
+ (void)orientation:(id)arg1;
+ (void)batteryLevel:(float)arg1;
+ (void)viewStateForArticle:(id)arg1 name:(id)arg2 state:(unsigned long long)arg3;
+ (void)logDeviceInformation;
+ (void)search;
+ (void)category:(id)arg1 parentCategory:(id)arg2 state:(unsigned long long)arg3;
+ (void)articleList:(id)arg1 showMoreClickedForCategory:(id)arg2 state:(unsigned long long)arg3;
+ (void)articleList:(id)arg1 currentView:(id)arg2 state:(unsigned long long)arg3;
+ (void)article:(id)arg1 name:(id)arg2 state:(unsigned long long)arg3;
+ (void)article:(id)arg1;
+ (void)dataCategory:(id)arg1 forState:(unsigned long long)arg2;
+ (void)knowledgeHome:(unsigned long long)arg1;
+ (id)knowledgeBasicInfo;
+ (id)basicInfo;
+ (void)sendJSONFromDictionary:(id)arg1 forType:(id)arg2;
@property(nonatomic) long long knowledgeConnectionCount; // @synthesize knowledgeConnectionCount=_knowledgeConnectionCount;
- (void)cleanUpLoggingSession;
- (void)forceCleanupLoggingSession;
- (void)addAnotherSession;
- (id)initWithKnowledgeInterface:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
