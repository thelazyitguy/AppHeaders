//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UICollectionView, _TtC4Hulu11PillControl, _TtC7HuluAPI18HuluTextStyleLabel, _TtC7HuluAPI19HuluTextStyleButton;

@interface _TtC4Hulu24GuideGenreViewController : UIViewController
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: pillControl
    // Error parsing type: , name: messageLabel
    // Error parsing type: , name: retryButton
    // Error parsing type: , name: dataController
    // Error parsing type: , name: guideView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: playingEabId
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapRetry:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC7HuluAPI19HuluTextStyleButton *retryButton; // @synthesize retryButton;
@property(nonatomic, retain) _TtC7HuluAPI18HuluTextStyleLabel *messageLabel; // @synthesize messageLabel;
@property(nonatomic, retain) _TtC4Hulu11PillControl *pillControl; // @synthesize pillControl;
@property(nonatomic, retain) UICollectionView *collectionView; // @synthesize collectionView;

@end

