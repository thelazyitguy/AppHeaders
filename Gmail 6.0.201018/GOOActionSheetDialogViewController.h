//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GOODialogContainerScrollView, GOODialogView;

@interface GOOActionSheetDialogViewController : UIViewController
{
    _Bool _queryingSupportedOrientations;
    GOODialogView *_actionSheetView;
    GOODialogContainerScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isQueryingSupportedOrientations) _Bool queryingSupportedOrientations; // @synthesize queryingSupportedOrientations=_queryingSupportedOrientations;
@property(retain, nonatomic) GOODialogContainerScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GOODialogView *actionSheetView; // @synthesize actionSheetView=_actionSheetView;
- (id)navigationPrimaryScrollView;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)targetViewControllerForInterfaceOrientationQuery;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithMessage:(id)arg1;

@end

