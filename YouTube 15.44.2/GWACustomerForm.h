//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAForm-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAButtonFlowSection, GWALegalMessageFlowSection, GWAMegalogsContext, GWASimpleForm, NSArray, NSNumber, NSString;
@protocol GWAForm;

@interface GWACustomerForm : NSObject <GWAForm, GWAMegalogsSupportingComponent>
{
    id <GWAForm> _creditCardForm;
    id <GWAForm> _legalAddressForm;
    GWALegalMessageFlowSection *_legalMessageSection;
    GWAButtonFlowSection *_buttonSection;
    GWASimpleForm *_contactForm;
    NSArray *_sections;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
- (void)wrapUpMegalogsContexts;
- (void)prepareMegalogsContexts;
- (void)setupSubcomponentsSupportingMegalogs;
- (_Bool)shouldReplaceLegalAddressWithAddressHint:(id)arg1;
- (long long)formType;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (id)sections;
- (id)initWithCustomerForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

