//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol GWAAutocompleteInputAccessoryViewDelegate;

@interface GWAAutocompleteInputAccessoryView : UIView
{
    NSArray *_values;
    id <GWAAutocompleteInputAccessoryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GWAAutocompleteInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buttonTapped:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)orientationDidChange:(id)arg1;
- (id)initWithAttributedTextArray:(id)arg1 values:(id)arg2 colorGroup:(id)arg3;
- (id)init;

@end
