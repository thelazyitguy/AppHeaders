//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface _TtC7HuluAPI18HuluTextStyleLabel : UILabel
{
    // Error parsing type: , name: topInset
    // Error parsing type: , name: bottomInset
    // Error parsing type: , name: leftInset
    // Error parsing type: , name: rightInset
    // Error parsing type: , name: textStyleString
    // Error parsing type: , name: automaticallyAdjustFontForSizeCategory
    // Error parsing type: , name: textStyle
    // Error parsing type: , name: underlyingText
    // Error parsing type: , name: baselinePosition
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForInterfaceBuilder;
- (void)drawTextInRect:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, copy) NSString *text;
@property(nonatomic) _Bool automaticallyAdjustFontForSizeCategory; // @synthesize automaticallyAdjustFontForSizeCategory;
@property(nonatomic, copy) NSString *textStyleString;
@property(nonatomic) double rightInset; // @synthesize rightInset;
@property(nonatomic) double leftInset; // @synthesize leftInset;
@property(nonatomic) double bottomInset; // @synthesize bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset;

@end
