//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UIPanGestureRecognizer, UITableView, UIView;
@protocol IBGReportCategoriesVCDelegate;

@interface IBGReportCategoriesVC : UIViewController
{
    id <IBGReportCategoriesVCDelegate> _controller;
    NSString *_titleHeader;
    UIView *_shadeView;
    UITableView *_dialogTableView;
    UILabel *_headerLabel;
    UIView *_contentView;
    UIView *_footerView;
    UIView *_dialogView;
    UIButton *_cancelButton;
    UIPanGestureRecognizer *_panRecognizer;
    NSArray *_sepratorViews;
    NSLayoutConstraint *_categoriesTableHeightConstraints;
    NSLayoutConstraint *_headerSeparatorHeightConstraint;
    NSLayoutConstraint *_footerSeparatorHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *footerSeparatorHeightConstraint; // @synthesize footerSeparatorHeightConstraint=_footerSeparatorHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *headerSeparatorHeightConstraint; // @synthesize headerSeparatorHeightConstraint=_headerSeparatorHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *categoriesTableHeightConstraints; // @synthesize categoriesTableHeightConstraints=_categoriesTableHeightConstraints;
@property(retain, nonatomic) NSArray *sepratorViews; // @synthesize sepratorViews=_sepratorViews;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIView *dialogView; // @synthesize dialogView=_dialogView;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UITableView *dialogTableView; // @synthesize dialogTableView=_dialogTableView;
@property(nonatomic) __weak UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(copy, nonatomic) NSString *titleHeader; // @synthesize titleHeader=_titleHeader;
@property(retain, nonatomic) id <IBGReportCategoriesVCDelegate> controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterNotifications;
- (void)dismiss;
- (void)cancelButtonPressed:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (long long)getDialogCount;
- (id)getImageForIndex:(long long)arg1;
- (id)getAccessibilityIdentifierNameForIndex:(long long)arg1;
- (id)getNameForIndex:(long long)arg1;
- (id)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)registerCells;
- (_Bool)bottomOfView:(id)arg1 isHigherThanTopOfSuperViewWithOffset:(double)arg2;
- (_Bool)topOfView:(id)arg1 isLowerThanBottomOfSuperViewWithOffset:(double)arg2;
- (_Bool)isViewOffScreen:(id)arg1 withDismissOffset:(double)arg2;
- (void)handlePan:(id)arg1;
- (void)adjustDialogViewHeight;
- (_Bool)shouldScroll;
- (double)itemsCountShouldBeDisplayed;
- (void)addPoweredByView;
- (void)applyTheme;
- (void)registerNotifications;
- (void)adjustSeparatorHeight;
- (void)setupShadeView;
- (void)viewDidLoad;
- (id)initWithReportType:(long long)arg1 actionHandler:(CDUnknownBlockType)arg2;

@end

