//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <JumioCore/JumioAppearance-Protocol.h>

@class NSNumber, NSString, UIColor;

@interface JumioBaseView : UIView <JumioAppearance>
{
    NSNumber *_disableBlur;
    NSNumber *_enableDarkMode;
    UIColor *_foregroundColor;
    NSString *_customLightFontName;
    NSString *_customRegularFontName;
    NSString *_customMediumFontName;
    NSString *_customBoldFontName;
    NSString *_customItalicFontName;
}

+ (id)jumioAppearance;
@property(retain, nonatomic) NSString *customItalicFontName; // @synthesize customItalicFontName=_customItalicFontName;
@property(retain, nonatomic) NSString *customBoldFontName; // @synthesize customBoldFontName=_customBoldFontName;
@property(retain, nonatomic) NSString *customMediumFontName; // @synthesize customMediumFontName=_customMediumFontName;
@property(retain, nonatomic) NSString *customRegularFontName; // @synthesize customRegularFontName=_customRegularFontName;
@property(retain, nonatomic) NSString *customLightFontName; // @synthesize customLightFontName=_customLightFontName;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSNumber *enableDarkMode; // @synthesize enableDarkMode=_enableDarkMode;
@property(retain, nonatomic) NSNumber *disableBlur; // @synthesize disableBlur=_disableBlur;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
