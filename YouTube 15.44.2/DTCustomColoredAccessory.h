//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor;

@interface DTCustomColoredAccessory : UIControl
{
    UIColor *_accessoryColor;
    UIColor *_highlightedColor;
    unsigned long long _type;
    UIColor *_frontSquareAccessoryColor;
    UIColor *_backSquareAccessoryColor;
}

+ (id)squareAccessoryWithColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)accessoryWithColor:(id)arg1 type:(unsigned long long)arg2;
+ (id)accessoryWithColor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backSquareAccessoryColor; // @synthesize backSquareAccessoryColor=_backSquareAccessoryColor;
@property(retain, nonatomic) UIColor *frontSquareAccessoryColor; // @synthesize frontSquareAccessoryColor=_frontSquareAccessoryColor;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *accessoryColor; // @synthesize accessoryColor=_accessoryColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

