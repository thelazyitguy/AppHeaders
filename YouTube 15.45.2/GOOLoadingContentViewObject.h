//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentViewObject.h>

#import <Module_Framework/NICellObject-Protocol.h>

@class GOOLoadingContentView, NSString;

@interface GOOLoadingContentViewObject : GOOBaseContentViewObject <NICellObject>
{
    NSString *_accessibilityIdentifier;
    GOOLoadingContentView *_loadingContentView;
    struct UIEdgeInsets _padding;
}

+ (id)loadingContentViewObject;
- (void).cxx_destruct;
@property(nonatomic) __weak GOOLoadingContentView *loadingContentView; // @synthesize loadingContentView=_loadingContentView;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)stopAnimating;
- (void)startAnimating;
- (Class)contentViewClass;
- (id)init;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

