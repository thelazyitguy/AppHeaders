//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWASelectorOptionView.h>

#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAMegalogsContext, NSArray, NSNumber, NSString;

@interface GWAVerificationOptionView : GWASelectorOptionView <GWAMegalogsSupportingComponent>
{
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
- (void)prepareMegalogsContexts;
- (long long)uiReference;
- (_Bool)editable;
- (_Bool)isEnabled;
- (id)rightImageWithCaption;
- (id)icon;
- (id)descriptionInfoMessage;
- (id)subtitleText;
- (id)titleText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
