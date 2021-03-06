//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/STKXMLModel.h>

@class NSArray, NSDictionary, NSString;

@interface STKXMLVASTLinearModel : STKXMLModel
{
    NSString *_skipoffset;
    NSString *_adParameters;
    NSString *_duration;
    NSArray *_mediafiles;
    NSArray *_icons;
    NSArray *_trackingEvents;
    NSDictionary *_videoClicks;
}

+ (id)videoClickTransformer:(id)arg1;
+ (id)videoClicksValueTransformer;
+ (id)iconsValueTransformer;
+ (id)trackingEventsValueTransformer;
+ (id)mediafilesValueTransformer;
+ (id)modelByParsingNode:(id)arg1;
+ (id)propertyPathByNodeName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *videoClicks; // @synthesize videoClicks=_videoClicks;
@property(retain, nonatomic) NSArray *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSArray *mediafiles; // @synthesize mediafiles=_mediafiles;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *adParameters; // @synthesize adParameters=_adParameters;
@property(retain, nonatomic) NSString *skipoffset; // @synthesize skipoffset=_skipoffset;
- (void)populateWithLinear:(id)arg1;
@property(readonly, nonatomic) NSArray *customClicks;
@property(readonly, nonatomic) NSArray *clicksThrough;
@property(readonly, nonatomic) NSArray *clicksTracking;

@end

