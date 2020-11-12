//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UVSPresentSurveyParams, UVSRequestSurveyParams, UVSSurveyMetadata, UVSSurveySyncParams;
@protocol UVSSurveyEventListener;

@protocol UVSSurveyAPI <NSObject>
- (void)clearCachedData;
- (void)syncWithUserVoiceWithParams:(UVSSurveySyncParams *)arg1;
- (void)dismissSurvey:(UVSSurveyMetadata *)arg1;
- (void)presentSurveyWithParams:(UVSPresentSurveyParams *)arg1 listener:(id <UVSSurveyEventListener>)arg2;
- (void)requestSurveyWithParams:(UVSRequestSurveyParams *)arg1 callback:(void (^)(UVSSurveyData *, NSError *))arg2;
@end
