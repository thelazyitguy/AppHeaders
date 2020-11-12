//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface SDCAlertVisualStyle : NSObject
{
    // Error parsing type: , name: width
    // Error parsing type: , name: cornerRadius
    // Error parsing type: , name: contentPadding
    // Error parsing type: , name: margins
    // Error parsing type: , name: backgroundColor
    // Error parsing type: , name: verticalElementSpacing
    // Error parsing type: , name: actionViewSize
    // Error parsing type: , name: actionHighlightColor
    // Error parsing type: , name: actionViewSeparatorColor
    // Error parsing type: , name: actionViewSeparatorThickness
    // Error parsing type: , name: textFieldFont
    // Error parsing type: , name: textFieldHeight
    // Error parsing type: , name: textFieldBorderColor
    // Error parsing type: , name: textFieldMargins
    // Error parsing type: , name: normalTextColor
    // Error parsing type: , name: destructiveTextColor
    // Error parsing type: , name: alertPreferredFont
    // Error parsing type: , name: alertNormalFont
    // Error parsing type: , name: actionSheetPreferredFont
    // Error parsing type: , name: actionSheetNormalFont
    // Error parsing type: , name: alertStyle
}

- (void).cxx_destruct;
- (id)init;
- (id)fontFor:(id)arg1;
- (id)textColorFor:(id)arg1;
- (id)initWithAlertStyle:(long long)arg1;
@property(nonatomic, retain) UIFont *actionSheetNormalFont; // @synthesize actionSheetNormalFont;
@property(nonatomic, retain) UIFont *actionSheetPreferredFont; // @synthesize actionSheetPreferredFont;
@property(nonatomic, retain) UIFont *alertNormalFont; // @synthesize alertNormalFont;
@property(nonatomic, retain) UIFont *alertPreferredFont; // @synthesize alertPreferredFont;
@property(nonatomic, retain) UIColor *destructiveTextColor; // @synthesize destructiveTextColor;
@property(nonatomic, retain) UIColor *normalTextColor; // @synthesize normalTextColor;
@property(nonatomic) struct UIEdgeInsets textFieldMargins; // @synthesize textFieldMargins;
@property(nonatomic, retain) UIColor *textFieldBorderColor; // @synthesize textFieldBorderColor;
@property(nonatomic) double textFieldHeight; // @synthesize textFieldHeight;
@property(nonatomic, retain) UIFont *textFieldFont; // @synthesize textFieldFont;
@property(nonatomic) double actionViewSeparatorThickness; // @synthesize actionViewSeparatorThickness;
@property(nonatomic, retain) UIColor *actionViewSeparatorColor; // @synthesize actionViewSeparatorColor;
@property(nonatomic, retain) UIColor *actionHighlightColor; // @synthesize actionHighlightColor;
@property(nonatomic) struct CGSize actionViewSize; // @synthesize actionViewSize;
@property(nonatomic) double verticalElementSpacing; // @synthesize verticalElementSpacing;
@property(nonatomic, retain) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic) double width; // @synthesize width;

@end
