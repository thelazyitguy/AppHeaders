//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/FNTagsInputViewDelegate-Protocol.h>
#import <Funny/IFControllerProtocol-Protocol.h>

@class FNROContent, FNTagsInputView, IFTagsEditRouter, NSString, UIView;
@protocol IFModelProtocol, IFViewProtocol, _TtP25FCFuncorpNetworkingiFunny18NetworkTagsService_;

@interface IFTagsEditViewController : UIViewController <FNTagsInputViewDelegate, IFControllerProtocol>
{
    id <_TtP25FCFuncorpNetworkingiFunny18NetworkTagsService_> networkTagsManager;
    id <IFModelProtocol> model;
    IFTagsEditRouter *_router;
    FNROContent *_content;
    CDUnknownBlockType _contentUpdateHandler;
    FNTagsInputView *_tagsInputView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNTagsInputView *tagsInputView; // @synthesize tagsInputView=_tagsInputView;
@property(copy, nonatomic) CDUnknownBlockType contentUpdateHandler; // @synthesize contentUpdateHandler=_contentUpdateHandler;
@property(retain, nonatomic) FNROContent *content; // @synthesize content=_content;
@property(retain, nonatomic) IFTagsEditRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) id <IFModelProtocol> model; // @synthesize model;
- (void)close;
- (void)saveTagsTap;
- (void)onBackTap;
- (long long)tagsInterfaceOrientation;
- (void)tagsViewEndEditing:(id)arg1;
- (void)tagsViewBeginEditing:(id)arg1;
- (void)onEndEditing:(id)arg1;
- (void)cancelSuggestionRequest;
- (void)requestSuggestingWithTagsInputView:(id)arg1 text:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end

