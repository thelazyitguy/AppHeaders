//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCountAggregator, LPFeatureFlagManager;

@interface LPRequestFactory : NSObject
{
    LPFeatureFlagManager *_featureFlagManager;
    LPCountAggregator *_countAggregator;
}

@property(retain, nonatomic) LPCountAggregator *countAggregator; // @synthesize countAggregator=_countAggregator;
@property(retain, nonatomic) LPFeatureFlagManager *featureFlagManager; // @synthesize featureFlagManager=_featureFlagManager;
- (void).cxx_destruct;
- (_Bool)shouldReturnLPRequestClass;
- (id)createPostForApiMethod:(id)arg1 params:(id)arg2;
- (id)createGetForApiMethod:(id)arg1 params:(id)arg2;
- (id)deleteNewsfeedMessageWithParams:(id)arg1;
- (id)markNewsfeedMessageAsReadWithParams:(id)arg1;
- (id)getNewsfeedMessagesWithParams:(id)arg1;
- (id)logWithParams:(id)arg1;
- (id)getViewControllerVersionsListWithParams:(id)arg1;
- (id)saveInterfaceImageWithParams:(id)arg1;
- (id)saveInterfaceWithParams:(id)arg1;
- (id)heartbeatWithParams:(id)arg1;
- (id)downloadFileWithParams:(id)arg1;
- (id)uploadFileWithParams:(id)arg1;
- (id)setTrafficSourceInfoWithParams:(id)arg1;
- (id)setDeviceAttributesWithParams:(id)arg1;
- (id)setUserAttributesWithParams:(id)arg1;
- (id)registerDeviceWithParams:(id)arg1;
- (id)multiWithParams:(id)arg1;
- (id)resumeStateWithParams:(id)arg1;
- (id)resumeSessionWithParams:(id)arg1;
- (id)pauseStateWithParams:(id)arg1;
- (id)pauseSessionWithParams:(id)arg1;
- (id)advanceWithParams:(id)arg1;
- (id)trackGeofenceWithParams:(id)arg1;
- (id)trackWithParams:(id)arg1;
- (id)restartWithParams:(id)arg1;
- (id)stopWithParams:(id)arg1;
- (id)setVarsWithParams:(id)arg1;
- (id)getVarsWithParams:(id)arg1;
- (id)startWithParams:(id)arg1;
- (id)initWithFeatureFlagManager:(id)arg1;

@end
