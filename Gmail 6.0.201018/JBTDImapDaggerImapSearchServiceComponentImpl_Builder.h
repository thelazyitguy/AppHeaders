//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JBTDImapConfigImapOptionsComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataMessageregionApiMessageRegionComponent, JBTDImapImapCommonComponent;

@interface JBTDImapDaggerImapSearchServiceComponentImpl_Builder : NSObject
{
    id <JBTDImapImapCommonComponent> imapCommonComponent_;
    JBTDImapConfigImapOptionsComponent *imapOptionsComponent_;
    id <ComGoogleAppsBigtopDataMessageregionApiMessageRegionComponent> messageRegionComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
}

- (void)dealloc;
- (id)build;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)messageRegionComponentWithComGoogleAppsBigtopDataMessageregionApiMessageRegionComponent:(id)arg1;
- (id)imapOptionsComponentWithJBTDImapConfigImapOptionsComponent:(id)arg1;
- (id)imapCommonComponentWithJBTDImapImapCommonComponent:(id)arg1;

@end
