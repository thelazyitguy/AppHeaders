//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAInAppMessageDisplayContent.h>

@class NSArray, UAInAppMessageButtonInfo, UAInAppMessageMediaInfo, UAInAppMessageTextInfo, UIColor;

@interface UAInAppMessageModalDisplayContent : UAInAppMessageDisplayContent
{
    _Bool _allowFullScreenDisplay;
    UAInAppMessageTextInfo *_heading;
    UAInAppMessageTextInfo *_body;
    UAInAppMessageMediaInfo *_media;
    UAInAppMessageButtonInfo *_footer;
    NSArray *_buttons;
    long long _buttonLayout;
    long long _contentLayout;
    UIColor *_backgroundColor;
    UIColor *_dismissButtonColor;
    double _borderRadiusPoints;
}

+ (id)displayContentWithJSON:(id)arg1 error:(id *)arg2;
+ (id)displayContentWithBuilderBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowFullScreenDisplay; // @synthesize allowFullScreenDisplay=_allowFullScreenDisplay;
@property(nonatomic) double borderRadiusPoints; // @synthesize borderRadiusPoints=_borderRadiusPoints;
@property(retain, nonatomic) UIColor *dismissButtonColor; // @synthesize dismissButtonColor=_dismissButtonColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long contentLayout; // @synthesize contentLayout=_contentLayout;
@property(nonatomic) long long buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UAInAppMessageButtonInfo *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UAInAppMessageMediaInfo *media; // @synthesize media=_media;
@property(retain, nonatomic) UAInAppMessageTextInfo *body; // @synthesize body=_body;
@property(retain, nonatomic) UAInAppMessageTextInfo *heading; // @synthesize heading=_heading;
- (long long)displayType;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToInAppMessageModalDisplayContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)extend:(CDUnknownBlockType)arg1;
- (id)toJSON;
- (id)initWithBuilder:(id)arg1;

@end
