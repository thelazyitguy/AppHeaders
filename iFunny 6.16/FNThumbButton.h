//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface FNThumbButton : UIButton
{
    UIView *highlightedView;
    id _userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
