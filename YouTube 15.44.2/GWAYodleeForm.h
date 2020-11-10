//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAForm-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAMegalogsContext, GWAUiFieldsSection, NSArray, NSNumber, NSString, OrchYodleeForm;

@interface GWAYodleeForm : NSObject <GWAForm, GWAMegalogsSupportingComponent>
{
    OrchYodleeForm *_proto;
    NSArray *_sections;
    GWAUiFieldsSection *_questionsSection;
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
- (id)centerTextObjectForMessage:(id)arg1;
- (void)addDescriptionSectonForForm:(id)arg1 toSections:(id)arg2;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (id)initWithForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

