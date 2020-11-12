//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UVSSurveyAuthParams;

@interface UVSRequestSurveyParams : NSObject
{
    _Bool _enableTestingMode;
    NSString *_triggerID;
    UVSSurveyAuthParams *_authParams;
}

+ (id)paramsWithTriggerID:(id)arg1 authParams:(id)arg2 optionalParamsBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enableTestingMode; // @synthesize enableTestingMode=_enableTestingMode;
@property(readonly, nonatomic) UVSSurveyAuthParams *authParams; // @synthesize authParams=_authParams;
@property(readonly, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
- (id)initWithTriggerID:(id)arg1 authParams:(id)arg2 optionalParamsBlock:(CDUnknownBlockType)arg3;

@end
