//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextContentViewObject.h>

@class NSString, UIColor;
@protocol GOOCheckboxContentViewDelegate;

@interface GOOCheckboxContentViewObject : GOOTextContentViewObject
{
    _Bool _checked;
    _Bool _checkboxIsLeading;
    long long _elementID;
    UIColor *_checkboxColor;
    NSString *_accessibilityHintWhenChecked;
    NSString *_accessibilityHintWhenUnchecked;
    id <GOOCheckboxContentViewDelegate> _delegate;
}

+ (id)objectWithText:(id)arg1 detailText:(id)arg2 checked:(_Bool)arg3 elementID:(long long)arg4 position:(unsigned long long)arg5;
+ (id)objectWithText:(id)arg1 detailText:(id)arg2 checked:(_Bool)arg3 elementID:(long long)arg4;
+ (id)objectWithText:(id)arg1 checked:(_Bool)arg2 elementID:(long long)arg3 position:(unsigned long long)arg4;
+ (id)objectWithText:(id)arg1 checked:(_Bool)arg2 elementID:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool checkboxIsLeading; // @synthesize checkboxIsLeading=_checkboxIsLeading;
@property(nonatomic) __weak id <GOOCheckboxContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *accessibilityHintWhenUnchecked; // @synthesize accessibilityHintWhenUnchecked=_accessibilityHintWhenUnchecked;
@property(retain, nonatomic) NSString *accessibilityHintWhenChecked; // @synthesize accessibilityHintWhenChecked=_accessibilityHintWhenChecked;
@property(retain, nonatomic) UIColor *checkboxColor; // @synthesize checkboxColor=_checkboxColor;
@property(nonatomic) long long elementID; // @synthesize elementID=_elementID;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(readonly, nonatomic) struct CGSize checkboxSize;
- (void)updateAccessibilityTraitsWithCheckedState;
- (void)setChecked:(_Bool)arg1 animated:(_Bool)arg2;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;

@end

