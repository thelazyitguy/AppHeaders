//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFPhoneNumberConfirmViewControllerProtocol-Protocol.h>
#import <Funny/IFPhoneNumberConfirmViewDelegate-Protocol.h>

@class IFPhoneNumberConfirmModel, IFPhoneNumberConfirmRouter, NSString, UIBarButtonItem, UIView;
@protocol IFViewProtocol;

@interface IFPhoneNumberConfirmViewController : UIViewController <IFPhoneNumberConfirmViewDelegate, IFPhoneNumberConfirmViewControllerProtocol>
{
    IFPhoneNumberConfirmModel *_model;
    IFPhoneNumberConfirmRouter *_router;
    UIBarButtonItem *_nextBarItem;
    unsigned long long _useCase;
    CDUnknownBlockType _onConfirmPhoneNumber;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onConfirmPhoneNumber; // @synthesize onConfirmPhoneNumber=_onConfirmPhoneNumber;
@property(nonatomic) unsigned long long useCase; // @synthesize useCase=_useCase;
@property(nonatomic) __weak UIBarButtonItem *nextBarItem; // @synthesize nextBarItem=_nextBarItem;
@property(retain, nonatomic) IFPhoneNumberConfirmRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) IFPhoneNumberConfirmModel *model; // @synthesize model=_model;
- (void)readyToResendSmsInSeconds:(double)arg1;
- (void)modelDidSendPhoneNumber:(id)arg1;
- (void)modelDidConfirmCode;
- (void)modelDidError:(id)arg1;
- (void)showAlertWithError:(id)arg1;
- (double)topOffset;
- (void)handleCodeConfirmation;
- (void)updateNextButton;
- (void)displayActivityView;
- (void)dismissActivityView;
- (void)nextDidTapped:(id)arg1;
- (void)setupNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)confirmPhoneView;
- (void)loadView;
- (id)initWithUseCase:(unsigned long long)arg1 confirmPhoneNumberCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end

