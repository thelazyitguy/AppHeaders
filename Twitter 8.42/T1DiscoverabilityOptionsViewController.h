//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class NSObject, NSString, TFNDataViewItem;
@protocol T1DiscoverabilityOptionsProvider;

@interface T1DiscoverabilityOptionsViewController : TFNItemsDataViewController
{
    NSString *_scribePage;
    NSObject<T1DiscoverabilityOptionsProvider> *_optionsProvider;
    TFNDataViewItem *_findByEmailDescription;
    TFNDataViewItem *_findByPhoneDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNDataViewItem *findByPhoneDescription; // @synthesize findByPhoneDescription=_findByPhoneDescription;
@property(retain, nonatomic) TFNDataViewItem *findByEmailDescription; // @synthesize findByEmailDescription=_findByEmailDescription;
@property(retain, nonatomic) NSObject<T1DiscoverabilityOptionsProvider> *optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
- (void)_scribeDiscoSection:(id)arg1 withOptIn:(_Bool)arg2;
- (void)update:(_Bool)arg1;
- (void)_done;
- (id)scribe;
- (void)viewDidLayoutSubviews;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithOptionsProvider:(id)arg1 scribePage:(id)arg2;

@end
