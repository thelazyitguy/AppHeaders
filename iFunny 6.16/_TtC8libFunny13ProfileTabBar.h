//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol _TtP8libFunny21ProfileTabbarDelegate_;

@interface _TtC8libFunny13ProfileTabBar : UIView
{
    // Error parsing type: , name: elements
    // Error parsing type: , name: padding
    // Error parsing type: , name: selectedItem
    // Error parsing type: , name: delegate
    // Error parsing type: , name: tabTouchAreas
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tabSelectedWithControl:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <_TtP8libFunny21ProfileTabbarDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic) long long selectedItem; // @synthesize selectedItem;
@property(nonatomic) long long padding; // @synthesize padding;
@property(nonatomic, copy) NSArray *elements;
@property(nonatomic, readonly) long long itemsCount;

@end
