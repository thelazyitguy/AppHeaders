//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/QTMCollectionViewController.h>

#import <Module_Framework/GOOHeaderNavigationParentViewController-Protocol.h>

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GSKVoiceSearchColorTheme, NSString, UIColor, UIFont;

@interface GSKHeaderCollectionViewController : QTMCollectionViewController <GOOHeaderNavigationParentViewController>
{
    GSKVoiceSearchColorTheme *_currentColorTheme;
    GOOFlexibleHeaderViewController *headerViewController;
    GOOHeaderNavigationView *headerNavigationView;
    UIFont *_checkboxTextFont;
    CDUnknownBlockType _colorThemeUpdateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType colorThemeUpdateBlock; // @synthesize colorThemeUpdateBlock=_colorThemeUpdateBlock;
@property(retain, nonatomic) UIFont *checkboxTextFont; // @synthesize checkboxTextFont=_checkboxTextFont;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController;
- (void)updateColorThemeIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleForSection:(long long)arg2;
- (id)collectionView:(id)arg1 innerBackgroundColorAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 cellStyleForSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setUpModel;
- (id)checkboxForLanguageName:(id)arg1 checked:(_Bool)arg2;
@property(retain, nonatomic) UIColor *headerColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

