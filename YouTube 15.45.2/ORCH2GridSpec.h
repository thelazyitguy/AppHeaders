//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2AlignmentSpec, ORCH2GridSpec_GridCellSpec;

@interface ORCH2GridSpec : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2AlignmentSpec *alignmentSelf; // @dynamic alignmentSelf;
@property(retain, nonatomic) ORCH2GridSpec_GridCellSpec *columnSpec; // @dynamic columnSpec;
@property(nonatomic) _Bool hasAlignmentSelf; // @dynamic hasAlignmentSelf;
@property(nonatomic) _Bool hasColumnSpec; // @dynamic hasColumnSpec;
@property(nonatomic) _Bool hasRowSpec; // @dynamic hasRowSpec;
@property(retain, nonatomic) ORCH2GridSpec_GridCellSpec *rowSpec; // @dynamic rowSpec;

@end

