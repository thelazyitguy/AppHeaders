//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSService.h>

@class AWSIoTData, AWSIoTMQTTClient, AWSIoTMQTTConfiguration, AWSServiceConfiguration, AWSSynchronizedMutableDictionary, NSMutableDictionary;

@interface AWSIoTDataManager : AWSService
{
    _Bool _userDidIssueDisconnect;
    _Bool _userDidIssueConnect;
    AWSServiceConfiguration *_configuration;
    AWSIoTMQTTConfiguration *_mqttConfiguration;
    AWSIoTData *_IoTData;
    AWSSynchronizedMutableDictionary *_shadows;
    AWSIoTMQTTClient *_mqttClient;
    NSMutableDictionary *_userMetaDataDict;
}

+ (_Bool)isThingShadowTopicFromTopicTokens:(id)arg1 subscribe:(_Bool)arg2;
+ (id)buildTopicForShadow:(id)arg1 operation:(long long)arg2;
+ (id)buildTopicForShadow:(id)arg1 operation:(long long)arg2 type:(long long)arg3;
+ (id)operationStatusTypeStrings;
+ (id)operationTypeStrings;
+ (void)removeIoTDataManagerForKey:(id)arg1;
+ (id)IoTDataManagerForKey:(id)arg1;
+ (void)registerIoTDataManagerWithConfiguration:(id)arg1 withMQTTConfiguration:(id)arg2 forKey:(id)arg3;
+ (void)registerIoTDataManagerWithConfiguration:(id)arg1 forKey:(id)arg2;
+ (void)_createServiceClient;
+ (_Bool)_isEndpointSet:(id)arg1;
+ (id)defaultIoTDataManager;
@property(retain, nonatomic) NSMutableDictionary *userMetaDataDict; // @synthesize userMetaDataDict=_userMetaDataDict;
@property _Bool userDidIssueConnect; // @synthesize userDidIssueConnect=_userDidIssueConnect;
@property _Bool userDidIssueDisconnect; // @synthesize userDidIssueDisconnect=_userDidIssueDisconnect;
@property(retain, nonatomic) AWSIoTMQTTClient *mqttClient; // @synthesize mqttClient=_mqttClient;
@property(retain, nonatomic) AWSSynchronizedMutableDictionary *shadows; // @synthesize shadows=_shadows;
@property(retain, nonatomic) AWSIoTData *IoTData; // @synthesize IoTData=_IoTData;
@property(readonly, nonatomic) AWSIoTMQTTConfiguration *mqttConfiguration; // @synthesize mqttConfiguration=_mqttConfiguration;
@property(readonly, nonatomic) AWSServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (_Bool)deleteShadow:(id)arg1 clientToken:(id)arg2;
- (_Bool)deleteShadow:(id)arg1;
- (_Bool)getShadow:(id)arg1 clientToken:(id)arg2;
- (_Bool)getShadow:(id)arg1;
- (_Bool)updateShadow:(id)arg1 jsonString:(id)arg2 clientToken:(id)arg3;
- (_Bool)updateShadow:(id)arg1 jsonString:(id)arg2;
- (_Bool)unregisterFromShadow:(id)arg1;
- (_Bool)registerWithShadow:(id)arg1 options:(id)arg2 eventCallback:(CDUnknownBlockType)arg3;
- (_Bool)operationWithShadow:(id)arg1 operation:(long long)arg2 stateDictionary:(id)arg3;
- (void)shadowOperationTimeoutOnTimer:(id)arg1;
- (id)generateClientToken;
- (_Bool)handleMessagesForShadow:(id)arg1 operation:(long long)arg2 status:(long long)arg3 payload:(id)arg4;
- (_Bool)handleSubscriptionsForShadow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)createSubscriptionsForShadow:(id)arg1 operations:(id)arg2 statii:(id)arg3;
- (void)unsubscribeTopic:(id)arg1 ackCallback:(CDUnknownBlockType)arg2;
- (void)unsubscribeTopic:(id)arg1;
- (_Bool)subscribeToTopic:(id)arg1 QoS:(long long)arg2 extendedCallback:(CDUnknownBlockType)arg3 ackCallback:(CDUnknownBlockType)arg4;
- (_Bool)subscribeToTopic:(id)arg1 QoS:(long long)arg2 extendedCallback:(CDUnknownBlockType)arg3;
- (_Bool)subscribeToTopic:(id)arg1 QoS:(long long)arg2 messageCallback:(CDUnknownBlockType)arg3 ackCallback:(CDUnknownBlockType)arg4;
- (_Bool)subscribeToTopic:(id)arg1 QoS:(long long)arg2 messageCallback:(CDUnknownBlockType)arg3;
- (_Bool)publishData:(id)arg1 onTopic:(id)arg2 QoS:(long long)arg3;
- (_Bool)publishData:(id)arg1 onTopic:(id)arg2 QoS:(long long)arg3 ackCallback:(CDUnknownBlockType)arg4;
- (_Bool)publishString:(id)arg1 onTopic:(id)arg2 QoS:(long long)arg3;
- (_Bool)publishString:(id)arg1 onTopic:(id)arg2 QoS:(long long)arg3 ackCallback:(CDUnknownBlockType)arg4;
- (long long)getConnectionStatus;
- (void)disconnect;
- (_Bool)connectUsingWebSocketWithClientId:(id)arg1 cleanSession:(_Bool)arg2 customAuthorizerName:(id)arg3 tokenKeyName:(id)arg4 tokenValue:(id)arg5 tokenSignature:(id)arg6 statusCallback:(CDUnknownBlockType)arg7;
- (_Bool)connectUsingWebSocketWithClientId:(id)arg1 cleanSession:(_Bool)arg2 statusCallback:(CDUnknownBlockType)arg3;
- (_Bool)connectWithClientId:(id)arg1 cleanSession:(_Bool)arg2 certificateId:(id)arg3 statusCallback:(CDUnknownBlockType)arg4 port:(unsigned int)arg5;
- (_Bool)connectWithClientId:(id)arg1 cleanSession:(_Bool)arg2 certificateId:(id)arg3 statusCallback:(CDUnknownBlockType)arg4;
- (_Bool)connectUsingALPNWithClientId:(id)arg1 cleanSession:(_Bool)arg2 certificateId:(id)arg3 statusCallback:(CDUnknownBlockType)arg4;
- (void)updateUserMetaData:(id)arg1;
- (void)addUserMetaData:(id)arg1;
- (void)enableMetricsCollection:(_Bool)arg1;
- (id)initWithConfiguration:(id)arg1 withMQTTConfiguration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

