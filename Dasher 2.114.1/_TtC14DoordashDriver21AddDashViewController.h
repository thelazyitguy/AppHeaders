//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class _TtC14DoordashDriver16AddDashViewModel, _TtC14DoordashDriver17AddDashInteractor, _TtC14DoordashDriver21AddDashOutletComposer;

@interface _TtC14DoordashDriver21AddDashViewController : UIViewController
{
    // Error parsing type: , name: halfAnHour
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: outletComposer
    // Error parsing type: , name: interactor
    // Error parsing type: , name: startDate
    // Error parsing type: , name: endDate
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)endDateDidEndEditing:(id)arg1;
- (void)startDateDidEndEditing:(id)arg1;
- (void)endDateDidBeginEditing:(id)arg1;
- (void)startDateDidBeginEditing:(id)arg1;
- (void)didTapAddDash;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic, retain) _TtC14DoordashDriver17AddDashInteractor *interactor; // @synthesize interactor;
@property(nonatomic, retain) _TtC14DoordashDriver21AddDashOutletComposer *outletComposer; // @synthesize outletComposer;
@property(nonatomic, retain) _TtC14DoordashDriver16AddDashViewModel *viewModel; // @synthesize viewModel;

@end
