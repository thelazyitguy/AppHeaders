//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ANPTopNavExtension-Protocol.h"

@class NSString, UIView;
@protocol ANPTopNavExtensionHeightChangedListener;

@interface ANPTopNavSuggestionsViewController : UIViewController <ANPTopNavExtension>
{
    id <ANPTopNavExtensionHeightChangedListener> _heightListener;
    UIView *_suggestionsView;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
@property(nonatomic) __weak id <ANPTopNavExtensionHeightChangedListener> heightListener; // @synthesize heightListener=_heightListener;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (double)availableSuggestionsHeight;
- (void)updateSuggestionViewWithDuration:(double)arg1 instantlyIfExpanding:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithSuggestionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
