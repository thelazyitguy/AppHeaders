//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;
@protocol GWAFlowSection;

@protocol GWAWidgetSubmitterDelegate
- (void)delaySubmitWithActivityIndicator:(_Bool)arg1 dependencyGraphToken:(NSData *)arg2;
- (void)selectSection:(unsigned long long)arg1;
- (void)sectionWantsFormReload:(id <GWAFlowSection>)arg1;
@end

