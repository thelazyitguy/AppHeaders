//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ANPNavMenuSLIViewControllerDelegate-Protocol.h"

@class ANPNavMenuMetricsHelper, NSArray, NSLayoutConstraint, NSString, UIStackView;
@protocol ANXAppearanceManager, WNDCollectionViewControllerDelegate;

@interface ANPNavMenuSLIViewController : UIViewController <ANPNavMenuSLIViewControllerDelegate>
{
    _Bool _isDataStale;
    id <WNDCollectionViewControllerDelegate> _wonderlandDelegate;
    NSArray *_items;
    UIStackView *_stackView;
    NSLayoutConstraint *_heightLayoutConstraint;
    NSString *_navMenuSubNavIdentifier;
    double _buttonPadding;
    id <ANXAppearanceManager> _appearanceManager;
    ANPNavMenuMetricsHelper *_metricsHelper;
}

@property(retain, nonatomic) ANPNavMenuMetricsHelper *metricsHelper; // @synthesize metricsHelper=_metricsHelper;
@property(retain, nonatomic) id <ANXAppearanceManager> appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(retain, nonatomic) NSString *navMenuSubNavIdentifier; // @synthesize navMenuSubNavIdentifier=_navMenuSubNavIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *heightLayoutConstraint; // @synthesize heightLayoutConstraint=_heightLayoutConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool isDataStale; // @synthesize isDataStale=_isDataStale;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <WNDCollectionViewControllerDelegate> wonderlandDelegate; // @synthesize wonderlandDelegate=_wonderlandDelegate;
- (void).cxx_destruct;
- (void)menuItemTapped:(id)arg1;
- (double)actualPaddingForTotalLength:(double)arg1 textLength:(double)arg2;
- (double)calculateTotalTextLengthForFont:(id)arg1;
- (_Bool)isMinifiedFontRequired;
- (void)removeSubViewsFromStackView:(id)arg1;
- (void)setupSubviews;
- (void)setUpStackView;
- (id)getItemsFromRDCPage:(id)arg1;
- (id)getRDCPageIDForSLIData:(struct NSDictionary *)arg1;
- (void)updateRDCPages:(struct NSDictionary *)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)willDisplaySLI;
- (id)initWithData:(struct NSDictionary *)arg1;

@end

