//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class AMICardScannerViewController;

@interface AMICardScannerNavigationController : UINavigationController
{
    AMICardScannerViewController *_scanner;
}

@property(readonly, nonatomic) AMICardScannerViewController *scanner; // @synthesize scanner=_scanner;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) AMICardScannerViewController *eventSource;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithScanner:(id)arg1;

@end

