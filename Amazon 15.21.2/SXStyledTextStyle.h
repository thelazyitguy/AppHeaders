//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UIColor, UIFont;

@interface SXStyledTextStyle : NSObject
{
    UIColor *_color;
    UIColor *_highlightedColor;
    UIColor *_highlighted2Color;
    UIColor *_strikethroughColor;
    UIColor *_superscriptColor;
    UIColor *_linkColor;
    UIFont *_font;
    UIFont *_highlightedFont;
    UIFont *_highlighted2Font;
    UIFont *_strikethroughFont;
    UIFont *_superscriptFont;
    UIFont *_linkFont;
    NSNumber *_interLineSpacing;
}

@property(retain, nonatomic) NSNumber *interLineSpacing; // @synthesize interLineSpacing=_interLineSpacing;
@property(retain, nonatomic) UIFont *linkFont; // @synthesize linkFont=_linkFont;
@property(retain, nonatomic) UIFont *superscriptFont; // @synthesize superscriptFont=_superscriptFont;
@property(retain, nonatomic) UIFont *strikethroughFont; // @synthesize strikethroughFont=_strikethroughFont;
@property(retain, nonatomic) UIFont *highlighted2Font; // @synthesize highlighted2Font=_highlighted2Font;
@property(retain, nonatomic) UIFont *highlightedFont; // @synthesize highlightedFont=_highlightedFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *superscriptColor; // @synthesize superscriptColor=_superscriptColor;
@property(retain, nonatomic) UIColor *strikethroughColor; // @synthesize strikethroughColor=_strikethroughColor;
@property(retain, nonatomic) UIColor *highlighted2Color; // @synthesize highlighted2Color=_highlighted2Color;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)init;

@end
