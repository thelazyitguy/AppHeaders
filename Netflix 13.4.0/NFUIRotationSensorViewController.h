//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface NFUIRotationSensorViewController : UIViewController
{
    _Bool _isWatchingForRotation;
    id _delegate;
}

- (void).cxx_destruct;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isWatchingForRotation; // @synthesize isWatchingForRotation=_isWatchingForRotation;
- (_Bool)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

