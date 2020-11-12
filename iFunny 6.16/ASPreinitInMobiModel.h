//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMJSONModel.h>

@class ASPreinitInMobiExtModel, ASPreinitInMobiRegsModel, NSArray, NSString;
@protocol ASPreinitInMobiPlacementsModel;

@interface ASPreinitInMobiModel : IMJSONModel
{
    ASPreinitInMobiExtModel *_ext;
    NSString *_inMobiAccountId;
    NSArray<ASPreinitInMobiPlacementsModel> *_placements;
    ASPreinitInMobiRegsModel *_regs;
}

@property(retain, nonatomic) ASPreinitInMobiRegsModel *regs; // @synthesize regs=_regs;
@property(retain, nonatomic) NSArray<ASPreinitInMobiPlacementsModel> *placements; // @synthesize placements=_placements;
@property(retain, nonatomic) NSString *inMobiAccountId; // @synthesize inMobiAccountId=_inMobiAccountId;
@property(retain, nonatomic) ASPreinitInMobiExtModel *ext; // @synthesize ext=_ext;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end
