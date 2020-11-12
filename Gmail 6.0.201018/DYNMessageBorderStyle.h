//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface DYNMessageBorderStyle : NSObject
{
    UIColor *_borderColor;
    UIColor *_backgroundColor;
    double _borderWidth;
    double _cornerRadius;
    double _horizontalPadding;
}

+ (id)defaultStyle;
- (void).cxx_destruct;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;

@end
