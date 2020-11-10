//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString, UIFont;

@interface UILocalizedTextField : UITextField
{
    UIFont *_originalFont;
    NSString *_originalKey;
    NSString *_originalAccessibilityLabel;
    NSString *_originalAccessibilityHint;
    NSString *_originalPlaceholder;
    long long _originalAlignment;
}

- (void).cxx_destruct;
@property(nonatomic) long long originalAlignment; // @synthesize originalAlignment=_originalAlignment;
@property(retain, nonatomic) NSString *originalPlaceholder; // @synthesize originalPlaceholder=_originalPlaceholder;
@property(retain, nonatomic) NSString *originalAccessibilityHint; // @synthesize originalAccessibilityHint=_originalAccessibilityHint;
@property(retain, nonatomic) NSString *originalAccessibilityLabel; // @synthesize originalAccessibilityLabel=_originalAccessibilityLabel;
@property(retain, nonatomic) NSString *originalKey; // @synthesize originalKey=_originalKey;
@property(retain, nonatomic) UIFont *originalFont; // @synthesize originalFont=_originalFont;
- (void)handleNFPreferredLocaleDidChangeNotification:(id)arg1;
- (void)initializePlaceholder;
- (void)awakeFromNib;

@end
