//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ELMPBEntitiesConfig, ELMPBModel, ELMPBStoreConfig, ELMPBTemplateConfig, NSString;

@interface ELMPBComponentType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *customClass; // @dynamic customClass;
@property(retain, nonatomic) ELMPBEntitiesConfig *entitiesConfig; // @dynamic entitiesConfig;
@property(nonatomic) _Bool hasCustomClass; // @dynamic hasCustomClass;
@property(nonatomic) _Bool hasEntitiesConfig; // @dynamic hasEntitiesConfig;
@property(nonatomic) _Bool hasModel; // @dynamic hasModel;
@property(nonatomic) _Bool hasStoreConfig; // @dynamic hasStoreConfig;
@property(nonatomic) _Bool hasTemplateConfig; // @dynamic hasTemplateConfig;
@property(retain, nonatomic) ELMPBModel *model; // @dynamic model;
@property(retain, nonatomic) ELMPBStoreConfig *storeConfig; // @dynamic storeConfig;
@property(retain, nonatomic) ELMPBTemplateConfig *templateConfig; // @dynamic templateConfig;

@end

