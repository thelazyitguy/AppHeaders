//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWAComponentGroupAll.h>

@class GWADividerSection, GWASummaryViewSection;

@interface GWAComponentGroupSection : GWAComponentGroupAll
{
    GWASummaryViewSection *_expandedSummarySection;
    GWADividerSection *_topDivider;
    GWADividerSection *_bottomDivider;
}

- (void).cxx_destruct;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (void)summaryTapped;
- (id)expandedSummaryViewWithSection;
- (_Bool)componentGroupShouldCollapse;
- (id)sections;
- (id)initWithComponentGroup:(id)arg1 uiReferenceToComponentMetadataMap:(id)arg2 context:(id)arg3;

@end

