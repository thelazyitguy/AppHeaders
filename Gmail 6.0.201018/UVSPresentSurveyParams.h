//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage, UIViewController, UVSSurveyAuthParams, UVSSurveyData;

@interface UVSPresentSurveyParams : NSObject
{
    UVSSurveyData *_surveyData;
    UVSSurveyAuthParams *_authParams;
    unsigned long long _colorTheme;
    NSDictionary *_productSpecificData;
    UIImage *_customLogoImage;
    UIViewController *_presenterViewController;
}

+ (id)paramsWithSurveyData:(id)arg1 authParams:(id)arg2 optionalParamsBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(readonly, nonatomic) UIImage *customLogoImage; // @synthesize customLogoImage=_customLogoImage;
@property(readonly, nonatomic) NSDictionary *productSpecificData; // @synthesize productSpecificData=_productSpecificData;
@property(readonly, nonatomic) unsigned long long colorTheme; // @synthesize colorTheme=_colorTheme;
@property(readonly, nonatomic) UVSSurveyAuthParams *authParams; // @synthesize authParams=_authParams;
@property(readonly, nonatomic) UVSSurveyData *surveyData; // @synthesize surveyData=_surveyData;
- (id)initWithSurveyData:(id)arg1 authParams:(id)arg2 optionalParamsBlock:(CDUnknownBlockType)arg3;

@end
