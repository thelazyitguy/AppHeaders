//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCleaningServiceInfo, AIRCleaningServiceTime, AIRCommercialHostInfo, AIRFixItReportInfo, AIRGuestControls, AIRListingCardKickerContent, AIRListingConfigurableContent, AIRListingDescription, AIRListingEmergencyMessage, AIRListingFloatingMessage, AIRListingMainSectionMessage, AIRListingPhoto, AIRListingWirelessInfo, AIRPricingQuote, AIRSelectListingProgress, AIRSpecialOffer, AIRTrustSignals, AIRUser, AIRUserFlag, NSArray, NSDate, NSNumber, NSSet, NSString, NSTimeZone, NSURL, _TtC29LegacyFeatureModelsFoundation19AIRSafetyDisclaimer;

@interface AIRListing : AIRModel
{
    _Bool _isAutoTranslated;
    _Bool _hasHostGuidebook;
    _Bool _active;
    _Bool _shouldShowListingNickname;
    _Bool _shouldShowAvailabilityPenaltyFreeCancellationEducationModal;
    _Bool _bookingQuestionsEnabled;
    _Bool _isInFriendlyBuildingProgram;
    _Bool _isInLandlordParternship;
    _Bool _isLocationExact;
    NSString *_listingId;
    NSString *_userId;
    NSString *_name;
    NSString *_nameOrPlaceholderName;
    NSString *_descriptionLocale;
    AIRListingDescription *_listingDescription;
    NSNumber *_priceNative;
    NSString *_nativeCurrency;
    NSString *_bedType;
    NSString *_roomType;
    NSString *_bathroomType;
    NSArray *_bathroomSharingInfo;
    NSNumber *_commonSpacesShared;
    NSArray *_commonSpacesSharingInfo;
    NSString *_propertyTypeGroup;
    NSString *_propertyTypeCategory;
    NSString *_propertyType;
    NSString *_propertyTypeClassification;
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_userDefinedLocation;
    NSNumber *_personCapacity;
    NSString *_cancellationPolicy;
    NSArray *_availableCancellationPolicies;
    NSString *_cancelPolicyShortStr;
    NSURL *_pictureUrl;
    NSURL *_thumbnailUrl;
    AIRListingConfigurableContent *_configurableContent;
    NSArray *_contextualPictures;
    AIRListingPhoto *_picture;
    NSString *_neighborhood;
    NSNumber *_minNights;
    NSNumber *_reviewsCount;
    NSNumber *_visibleReviewCount;
    NSNumber *_maxNights;
    NSNumber *_beds;
    NSNumber *_bathrooms;
    NSString *_guestLabel;
    NSString *_bedroomLabel;
    NSString *_bedLabel;
    NSString *_bathroomLabel;
    NSString *_hostCheckInTimePhraseForP4;
    NSString *_houseRules;
    NSString *_additionalHouseRules;
    NSString *_securityDepositFormatted;
    NSString *_localizedAdditionalHouseRules;
    NSNumber *_bedrooms;
    NSArray *_pictureUrls;
    NSString *_state;
    NSString *_stateNative;
    NSString *_countryCode;
    NSString *_localizedCity;
    NSString *_localizedCityName;
    NSString *_city;
    NSString *_cityNative;
    NSString *_country;
    NSString *_address;
    NSString *_houseManual;
    NSString *_localizedWirelessInfoDescription;
    AIRListingWirelessInfo *_wirelessInfo;
    NSString *_directions;
    NSString *_fullAddress;
    NSString *_fullAddressNative;
    NSString *_publicAddress;
    NSString *_status;
    NSString *_summary;
    NSNumber *_instantBookEnabled;
    NSNumber *_smartPricingEnabled;
    NSNumber *_isNewListing;
    AIRUser *_user;
    AIRUser *_primaryHost;
    NSNumber *_isSuperhost;
    NSArray *_hosts;
    NSURL *_hostThumbnailUrl;
    NSArray *_reviews;
    NSArray *_photos;
    NSString *_street;
    NSString *_streetNative;
    NSString *_apt;
    NSString *_zipcode;
    NSNumber *_hasAvailability;
    NSNumber *_checkInTime;
    NSNumber *_checkInTimeEndsAt;
    NSString *_checkInTimeStart;
    NSString *_checkInTimeEnd;
    NSNumber *_checkOutTime;
    NSNumber *_cancelPolicy;
    NSArray *_amenitiesIds;
    NSArray *_previewAmenityNames;
    NSNumber *_propertyTypeId;
    NSNumber *_hasEverBeenAvailable;
    NSNumber *_starRating;
    NSNumber *_averageRating;
    NSString *_photographyStatus;
    AIRSpecialOffer *_specialOffer;
    NSString *_market;
    AIRGuestControls *_guestControls;
    NSNumber *_placeRecommendationsCount;
    NSArray *_remarketingIds;
    AIRPricingQuote *_pricingQuote;
    NSString *_spaceType;
    AIRFixItReportInfo *_fixItReport;
    NSNumber *_tierID;
    _TtC29LegacyFeatureModelsFoundation19AIRSafetyDisclaimer *_safetyDisclaimer;
    NSArray *_previewTags;
    NSString *_locationContextDisplayName;
    AIRTrustSignals *_trustSignals;
    NSString *_pdpType;
    AIRListingMainSectionMessage *_mainSectionMessage;
    NSArray *_mainSectionMessages;
    NSString *_titleDisclaimerBadge;
    NSNumber *_titleDisplayMaxLines;
    NSArray *_richKickers;
    AIRListingFloatingMessage *_reviewMessage;
    AIRListingEmergencyMessage *_emergencyMessage;
    NSString *_urgencyCommitmentMessage;
    NSArray *_overviewItems;
    NSNumber *_wishlistedCount;
    AIRUserFlag *_userFlag;
    NSString *_instantBookingAllowedCategory;
    NSString *_license;
    NSNumber *_requiresLicense;
    NSTimeZone *_timeZone;
    NSNumber *_starRatingAccuracy;
    NSNumber *_starRatingCheckin;
    NSNumber *_starRatingCleanliness;
    NSNumber *_starRatingCommunication;
    NSNumber *_starRatingLocation;
    NSNumber *_starRatingValue;
    NSNumber *_starRatingOverall;
    NSString *_listingNativeCurrency;
    NSNumber *_smartPricingAvailable;
    NSString *_listYourSpaceLastFinishedStepId;
    NSNumber *_listYourSpacePricingMode;
    NSString *_unscrubbedName;
    NSString *_unscrubbedSummary;
    NSString *_listingNickname;
    NSNumber *_listingPrice;
    NSString *_listingCurrency;
    NSNumber *_pictureCount;
    NSString *_roomTypeCategory;
    NSString *_bedTypeCategory;
    NSString *_snoozeStartDate;
    NSString *_snoozeEndDate;
    NSString *_delayPublishDate;
    AIRCommercialHostInfo *_commercialHostInfo;
    NSArray *_validCheckInTimeStartOptions;
    NSArray *_validCheckInTimeEndOptions;
    NSArray *_validCheckOutTimeOptions;
    NSArray *_checkInInformation;
    NSNumber *_checkInGuideStatus;
    NSNumber *_isAddressEditable;
    NSNumber *_isFullyRefundable;
    NSArray *_incentives;
    NSArray *_expectations;
    NSArray *_localizedExpectations;
    NSArray *_featuredAmenities;
    NSString *_localizedCheckInTimeWindow;
    NSString *_localizedCheckOutTime;
    NSArray *_collectionBadges;
    NSString *_languageCode;
    NSString *_localizedLanguage;
    NSString *_instantBookWelcomeMessage;
    NSString *_localizedInstantBookWelcomeMessage;
    NSArray *_bookingStandardQuestions;
    NSArray *_localizedBookingStandardQuestions;
    NSArray *_bookingCustomQuestions;
    NSArray *_localizedBookingCustomQuestions;
    NSNumber *_bookings;
    NSNumber *_pageViews;
    NSSet *_rooms;
    NSArray *_freeAmenities;
    NSNumber *_readyForSelectStatusValue;
    AIRSelectListingProgress *_selectListingProgress;
    NSArray *_pictureUrlsWithBound;
    NSArray *_enforcementActions;
    NSDate *_firstReservedAt;
    NSString *_roomAndPropertyType;
    NSArray *_formattedBadges;
    AIRListingCardKickerContent *_kickerContent;
    AIRListingCardKickerContent *_wideKickerContent;
    NSArray *_earningsEstimates;
    NSArray *_supportedCleaningServicePartners;
    AIRCleaningServiceInfo *_serviceInfo;
    NSArray *_availableTimeslots;
    NSArray *_serviceDateMarks;
    AIRCleaningServiceTime *_startAvailableTime;
    AIRCleaningServiceTime *_endAvailableTime;
    NSString *_photographyJobId;
    NSString *_photographyJobQuoteCurrency;
    NSNumber *_photographyJobQuoteNative;
    NSString *_photographyJobQuoteNativeFormatted;
    NSString *_photographyJobZeroAmountNativeFormatted;
    NSArray *_extendCards;
    NSArray *_pdpDisplayExtensions;
}

+ (id)fetchP4TranslationsForLocale:(id)arg1 listingID:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)getUnavailabilitiesForListingWithID:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 session:(id)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailure:(CDUnknownBlockType)arg6;
+ (id)getListingWithID:(id)arg1 allowCached:(_Bool)arg2 format:(id)arg3 session:(id)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailure:(CDUnknownBlockType)arg6;
+ (id)getListingRequestWithListingId:(id)arg1 format:(id)arg2;
+ (id)customTransformers;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *pdpDisplayExtensions; // @synthesize pdpDisplayExtensions=_pdpDisplayExtensions;
@property(readonly, nonatomic) _Bool isLocationExact; // @synthesize isLocationExact=_isLocationExact;
@property(readonly, copy, nonatomic) NSArray *extendCards; // @synthesize extendCards=_extendCards;
@property(readonly, copy, nonatomic) NSString *photographyJobZeroAmountNativeFormatted; // @synthesize photographyJobZeroAmountNativeFormatted=_photographyJobZeroAmountNativeFormatted;
@property(readonly, copy, nonatomic) NSString *photographyJobQuoteNativeFormatted; // @synthesize photographyJobQuoteNativeFormatted=_photographyJobQuoteNativeFormatted;
@property(readonly, copy, nonatomic) NSNumber *photographyJobQuoteNative; // @synthesize photographyJobQuoteNative=_photographyJobQuoteNative;
@property(readonly, copy, nonatomic) NSString *photographyJobQuoteCurrency; // @synthesize photographyJobQuoteCurrency=_photographyJobQuoteCurrency;
@property(readonly, copy, nonatomic) NSString *photographyJobId; // @synthesize photographyJobId=_photographyJobId;
@property(readonly, nonatomic) _Bool isInLandlordParternship; // @synthesize isInLandlordParternship=_isInLandlordParternship;
@property(readonly, nonatomic) _Bool isInFriendlyBuildingProgram; // @synthesize isInFriendlyBuildingProgram=_isInFriendlyBuildingProgram;
@property(readonly, copy, nonatomic) AIRCleaningServiceTime *endAvailableTime; // @synthesize endAvailableTime=_endAvailableTime;
@property(readonly, copy, nonatomic) AIRCleaningServiceTime *startAvailableTime; // @synthesize startAvailableTime=_startAvailableTime;
@property(readonly, copy, nonatomic) NSArray *serviceDateMarks; // @synthesize serviceDateMarks=_serviceDateMarks;
@property(readonly, copy, nonatomic) NSArray *availableTimeslots; // @synthesize availableTimeslots=_availableTimeslots;
@property(readonly, copy, nonatomic) AIRCleaningServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(readonly, copy, nonatomic) NSArray *supportedCleaningServicePartners; // @synthesize supportedCleaningServicePartners=_supportedCleaningServicePartners;
@property(readonly, copy, nonatomic) NSArray *earningsEstimates; // @synthesize earningsEstimates=_earningsEstimates;
@property(readonly, copy, nonatomic) AIRListingCardKickerContent *wideKickerContent; // @synthesize wideKickerContent=_wideKickerContent;
@property(readonly, copy, nonatomic) AIRListingCardKickerContent *kickerContent; // @synthesize kickerContent=_kickerContent;
@property(readonly, copy, nonatomic) NSArray *formattedBadges; // @synthesize formattedBadges=_formattedBadges;
@property(readonly, copy, nonatomic) NSString *roomAndPropertyType; // @synthesize roomAndPropertyType=_roomAndPropertyType;
@property(readonly, copy, nonatomic) NSDate *firstReservedAt; // @synthesize firstReservedAt=_firstReservedAt;
@property(readonly, copy, nonatomic) NSArray *enforcementActions; // @synthesize enforcementActions=_enforcementActions;
@property(readonly, copy, nonatomic) NSArray *pictureUrlsWithBound; // @synthesize pictureUrlsWithBound=_pictureUrlsWithBound;
@property(readonly, copy, nonatomic) AIRSelectListingProgress *selectListingProgress; // @synthesize selectListingProgress=_selectListingProgress;
@property(readonly, copy, nonatomic) NSNumber *readyForSelectStatusValue; // @synthesize readyForSelectStatusValue=_readyForSelectStatusValue;
@property(readonly, copy, nonatomic) NSArray *freeAmenities; // @synthesize freeAmenities=_freeAmenities;
@property(readonly, copy, nonatomic) NSSet *rooms; // @synthesize rooms=_rooms;
@property(readonly, copy, nonatomic) NSNumber *pageViews; // @synthesize pageViews=_pageViews;
@property(readonly, copy, nonatomic) NSNumber *bookings; // @synthesize bookings=_bookings;
@property(copy, nonatomic) NSArray *localizedBookingCustomQuestions; // @synthesize localizedBookingCustomQuestions=_localizedBookingCustomQuestions;
@property(readonly, copy, nonatomic) NSArray *bookingCustomQuestions; // @synthesize bookingCustomQuestions=_bookingCustomQuestions;
@property(readonly, copy, nonatomic) NSArray *localizedBookingStandardQuestions; // @synthesize localizedBookingStandardQuestions=_localizedBookingStandardQuestions;
@property(readonly, copy, nonatomic) NSArray *bookingStandardQuestions; // @synthesize bookingStandardQuestions=_bookingStandardQuestions;
@property(copy, nonatomic) NSString *localizedInstantBookWelcomeMessage; // @synthesize localizedInstantBookWelcomeMessage=_localizedInstantBookWelcomeMessage;
@property(readonly, copy, nonatomic) NSString *instantBookWelcomeMessage; // @synthesize instantBookWelcomeMessage=_instantBookWelcomeMessage;
@property(readonly, copy, nonatomic) NSString *localizedLanguage; // @synthesize localizedLanguage=_localizedLanguage;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) _Bool bookingQuestionsEnabled; // @synthesize bookingQuestionsEnabled=_bookingQuestionsEnabled;
@property(readonly, copy, nonatomic) NSArray *collectionBadges; // @synthesize collectionBadges=_collectionBadges;
@property(readonly, copy, nonatomic) NSString *localizedCheckOutTime; // @synthesize localizedCheckOutTime=_localizedCheckOutTime;
@property(readonly, copy, nonatomic) NSString *localizedCheckInTimeWindow; // @synthesize localizedCheckInTimeWindow=_localizedCheckInTimeWindow;
@property(readonly, copy, nonatomic) NSArray *featuredAmenities; // @synthesize featuredAmenities=_featuredAmenities;
@property(readonly, copy, nonatomic) NSArray *localizedExpectations; // @synthesize localizedExpectations=_localizedExpectations;
@property(readonly, copy, nonatomic) NSArray *expectations; // @synthesize expectations=_expectations;
@property(readonly, nonatomic) _Bool shouldShowAvailabilityPenaltyFreeCancellationEducationModal; // @synthesize shouldShowAvailabilityPenaltyFreeCancellationEducationModal=_shouldShowAvailabilityPenaltyFreeCancellationEducationModal;
@property(readonly, copy, nonatomic) NSArray *incentives; // @synthesize incentives=_incentives;
@property(readonly, nonatomic) NSNumber *isFullyRefundable; // @synthesize isFullyRefundable=_isFullyRefundable;
@property(readonly, copy, nonatomic) NSNumber *isAddressEditable; // @synthesize isAddressEditable=_isAddressEditable;
@property(readonly, copy, nonatomic) NSNumber *checkInGuideStatus; // @synthesize checkInGuideStatus=_checkInGuideStatus;
@property(readonly, copy, nonatomic) NSArray *checkInInformation; // @synthesize checkInInformation=_checkInInformation;
@property(readonly, copy, nonatomic) NSArray *validCheckOutTimeOptions; // @synthesize validCheckOutTimeOptions=_validCheckOutTimeOptions;
@property(readonly, copy, nonatomic) NSArray *validCheckInTimeEndOptions; // @synthesize validCheckInTimeEndOptions=_validCheckInTimeEndOptions;
@property(readonly, copy, nonatomic) NSArray *validCheckInTimeStartOptions; // @synthesize validCheckInTimeStartOptions=_validCheckInTimeStartOptions;
@property(readonly, copy, nonatomic) AIRCommercialHostInfo *commercialHostInfo; // @synthesize commercialHostInfo=_commercialHostInfo;
@property(readonly, copy, nonatomic) NSString *delayPublishDate; // @synthesize delayPublishDate=_delayPublishDate;
@property(readonly, copy, nonatomic) NSString *snoozeEndDate; // @synthesize snoozeEndDate=_snoozeEndDate;
@property(readonly, copy, nonatomic) NSString *snoozeStartDate; // @synthesize snoozeStartDate=_snoozeStartDate;
@property(readonly, copy, nonatomic) NSString *bedTypeCategory; // @synthesize bedTypeCategory=_bedTypeCategory;
@property(readonly, copy, nonatomic) NSString *roomTypeCategory; // @synthesize roomTypeCategory=_roomTypeCategory;
@property(readonly, copy, nonatomic) NSNumber *pictureCount; // @synthesize pictureCount=_pictureCount;
@property(retain, nonatomic) NSString *listingCurrency; // @synthesize listingCurrency=_listingCurrency;
@property(retain, nonatomic) NSNumber *listingPrice; // @synthesize listingPrice=_listingPrice;
@property(readonly, nonatomic) _Bool shouldShowListingNickname; // @synthesize shouldShowListingNickname=_shouldShowListingNickname;
@property(readonly, copy, nonatomic) NSString *listingNickname; // @synthesize listingNickname=_listingNickname;
@property(readonly, copy, nonatomic) NSString *unscrubbedSummary; // @synthesize unscrubbedSummary=_unscrubbedSummary;
@property(readonly, copy, nonatomic) NSString *unscrubbedName; // @synthesize unscrubbedName=_unscrubbedName;
@property(readonly, copy, nonatomic) NSNumber *listYourSpacePricingMode; // @synthesize listYourSpacePricingMode=_listYourSpacePricingMode;
@property(readonly, copy, nonatomic) NSString *listYourSpaceLastFinishedStepId; // @synthesize listYourSpaceLastFinishedStepId=_listYourSpaceLastFinishedStepId;
@property(retain, nonatomic) NSNumber *smartPricingAvailable; // @synthesize smartPricingAvailable=_smartPricingAvailable;
@property(retain, nonatomic) NSString *listingNativeCurrency; // @synthesize listingNativeCurrency=_listingNativeCurrency;
@property(readonly, copy, nonatomic) NSNumber *starRatingOverall; // @synthesize starRatingOverall=_starRatingOverall;
@property(readonly, copy, nonatomic) NSNumber *starRatingValue; // @synthesize starRatingValue=_starRatingValue;
@property(readonly, copy, nonatomic) NSNumber *starRatingLocation; // @synthesize starRatingLocation=_starRatingLocation;
@property(readonly, copy, nonatomic) NSNumber *starRatingCommunication; // @synthesize starRatingCommunication=_starRatingCommunication;
@property(readonly, copy, nonatomic) NSNumber *starRatingCleanliness; // @synthesize starRatingCleanliness=_starRatingCleanliness;
@property(readonly, copy, nonatomic) NSNumber *starRatingCheckin; // @synthesize starRatingCheckin=_starRatingCheckin;
@property(readonly, copy, nonatomic) NSNumber *starRatingAccuracy; // @synthesize starRatingAccuracy=_starRatingAccuracy;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSNumber *requiresLicense; // @synthesize requiresLicense=_requiresLicense;
@property(readonly, copy, nonatomic) NSString *license; // @synthesize license=_license;
@property(readonly, copy, nonatomic) NSString *instantBookingAllowedCategory; // @synthesize instantBookingAllowedCategory=_instantBookingAllowedCategory;
@property(readonly, copy, nonatomic) AIRUserFlag *userFlag; // @synthesize userFlag=_userFlag;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _Bool hasHostGuidebook; // @synthesize hasHostGuidebook=_hasHostGuidebook;
@property(readonly, copy, nonatomic) NSNumber *wishlistedCount; // @synthesize wishlistedCount=_wishlistedCount;
@property(readonly, copy, nonatomic) NSArray *overviewItems; // @synthesize overviewItems=_overviewItems;
@property(readonly, copy, nonatomic) NSString *urgencyCommitmentMessage; // @synthesize urgencyCommitmentMessage=_urgencyCommitmentMessage;
@property(readonly, copy, nonatomic) AIRListingEmergencyMessage *emergencyMessage; // @synthesize emergencyMessage=_emergencyMessage;
@property(readonly, copy, nonatomic) AIRListingFloatingMessage *reviewMessage; // @synthesize reviewMessage=_reviewMessage;
@property(readonly, copy, nonatomic) NSArray *richKickers; // @synthesize richKickers=_richKickers;
@property(readonly, nonatomic) _Bool isAutoTranslated; // @synthesize isAutoTranslated=_isAutoTranslated;
@property(readonly, copy, nonatomic) NSNumber *titleDisplayMaxLines; // @synthesize titleDisplayMaxLines=_titleDisplayMaxLines;
@property(readonly, copy, nonatomic) NSString *titleDisclaimerBadge; // @synthesize titleDisclaimerBadge=_titleDisclaimerBadge;
@property(readonly, copy, nonatomic) NSArray *mainSectionMessages; // @synthesize mainSectionMessages=_mainSectionMessages;
@property(readonly, copy, nonatomic) AIRListingMainSectionMessage *mainSectionMessage; // @synthesize mainSectionMessage=_mainSectionMessage;
@property(readonly, copy, nonatomic) NSString *pdpType; // @synthesize pdpType=_pdpType;
@property(readonly, copy, nonatomic) AIRTrustSignals *trustSignals; // @synthesize trustSignals=_trustSignals;
@property(readonly, copy, nonatomic) NSString *locationContextDisplayName; // @synthesize locationContextDisplayName=_locationContextDisplayName;
@property(readonly, copy, nonatomic) NSArray *previewTags; // @synthesize previewTags=_previewTags;
@property(readonly, copy, nonatomic) _TtC29LegacyFeatureModelsFoundation19AIRSafetyDisclaimer *safetyDisclaimer; // @synthesize safetyDisclaimer=_safetyDisclaimer;
@property(readonly, copy, nonatomic) NSNumber *tierID; // @synthesize tierID=_tierID;
@property(readonly, copy, nonatomic) AIRFixItReportInfo *fixItReport; // @synthesize fixItReport=_fixItReport;
@property(readonly, copy, nonatomic) NSString *spaceType; // @synthesize spaceType=_spaceType;
@property(readonly, copy, nonatomic) AIRPricingQuote *pricingQuote; // @synthesize pricingQuote=_pricingQuote;
@property(readonly, copy, nonatomic) NSArray *remarketingIds; // @synthesize remarketingIds=_remarketingIds;
@property(readonly, copy, nonatomic) NSNumber *placeRecommendationsCount; // @synthesize placeRecommendationsCount=_placeRecommendationsCount;
@property(readonly, copy, nonatomic) AIRGuestControls *guestControls; // @synthesize guestControls=_guestControls;
@property(readonly, copy, nonatomic) NSString *market; // @synthesize market=_market;
@property(readonly, copy, nonatomic) AIRSpecialOffer *specialOffer; // @synthesize specialOffer=_specialOffer;
@property(readonly, copy, nonatomic) NSString *photographyStatus; // @synthesize photographyStatus=_photographyStatus;
@property(readonly, copy, nonatomic) NSNumber *averageRating; // @synthesize averageRating=_averageRating;
@property(readonly, copy, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, copy, nonatomic) NSNumber *hasEverBeenAvailable; // @synthesize hasEverBeenAvailable=_hasEverBeenAvailable;
@property(readonly, copy, nonatomic) NSNumber *propertyTypeId; // @synthesize propertyTypeId=_propertyTypeId;
@property(readonly, copy, nonatomic) NSArray *previewAmenityNames; // @synthesize previewAmenityNames=_previewAmenityNames;
@property(readonly, copy, nonatomic) NSArray *amenitiesIds; // @synthesize amenitiesIds=_amenitiesIds;
@property(readonly, copy, nonatomic) NSNumber *cancelPolicy; // @synthesize cancelPolicy=_cancelPolicy;
@property(readonly, copy, nonatomic) NSNumber *checkOutTime; // @synthesize checkOutTime=_checkOutTime;
@property(readonly, copy, nonatomic) NSString *checkInTimeEnd; // @synthesize checkInTimeEnd=_checkInTimeEnd;
@property(readonly, copy, nonatomic) NSString *checkInTimeStart; // @synthesize checkInTimeStart=_checkInTimeStart;
@property(readonly, copy, nonatomic) NSNumber *checkInTimeEndsAt; // @synthesize checkInTimeEndsAt=_checkInTimeEndsAt;
@property(readonly, copy, nonatomic) NSNumber *checkInTime; // @synthesize checkInTime=_checkInTime;
@property(readonly, copy, nonatomic) NSNumber *hasAvailability; // @synthesize hasAvailability=_hasAvailability;
@property(readonly, copy, nonatomic) NSString *zipcode; // @synthesize zipcode=_zipcode;
@property(readonly, copy, nonatomic) NSString *apt; // @synthesize apt=_apt;
@property(readonly, copy, nonatomic) NSString *streetNative; // @synthesize streetNative=_streetNative;
@property(readonly, copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(readonly, copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(readonly, copy, nonatomic) NSArray *reviews; // @synthesize reviews=_reviews;
@property(readonly, copy, nonatomic) NSURL *hostThumbnailUrl; // @synthesize hostThumbnailUrl=_hostThumbnailUrl;
@property(readonly, copy, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(readonly, copy, nonatomic) NSNumber *isSuperhost; // @synthesize isSuperhost=_isSuperhost;
@property(readonly, copy, nonatomic) AIRUser *primaryHost; // @synthesize primaryHost=_primaryHost;
@property(readonly, copy, nonatomic) AIRUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSNumber *isNewListing; // @synthesize isNewListing=_isNewListing;
@property(readonly, copy, nonatomic) NSNumber *smartPricingEnabled; // @synthesize smartPricingEnabled=_smartPricingEnabled;
@property(readonly, copy, nonatomic) NSNumber *instantBookEnabled; // @synthesize instantBookEnabled=_instantBookEnabled;
@property(readonly, copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *publicAddress; // @synthesize publicAddress=_publicAddress;
@property(readonly, copy, nonatomic) NSString *fullAddressNative; // @synthesize fullAddressNative=_fullAddressNative;
@property(readonly, copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(readonly, copy, nonatomic) NSString *directions; // @synthesize directions=_directions;
@property(readonly, copy, nonatomic) AIRListingWirelessInfo *wirelessInfo; // @synthesize wirelessInfo=_wirelessInfo;
@property(readonly, copy, nonatomic) NSString *localizedWirelessInfoDescription; // @synthesize localizedWirelessInfoDescription=_localizedWirelessInfoDescription;
@property(readonly, copy, nonatomic) NSString *houseManual; // @synthesize houseManual=_houseManual;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSString *cityNative; // @synthesize cityNative=_cityNative;
@property(readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, copy, nonatomic) NSString *localizedCityName; // @synthesize localizedCityName=_localizedCityName;
@property(readonly, copy, nonatomic) NSString *localizedCity; // @synthesize localizedCity=_localizedCity;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *stateNative; // @synthesize stateNative=_stateNative;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSArray *pictureUrls; // @synthesize pictureUrls=_pictureUrls;
@property(readonly, copy, nonatomic) NSNumber *bedrooms; // @synthesize bedrooms=_bedrooms;
@property(readonly, copy, nonatomic) NSString *localizedAdditionalHouseRules; // @synthesize localizedAdditionalHouseRules=_localizedAdditionalHouseRules;
@property(readonly, copy, nonatomic) NSString *securityDepositFormatted; // @synthesize securityDepositFormatted=_securityDepositFormatted;
@property(readonly, copy, nonatomic) NSString *additionalHouseRules; // @synthesize additionalHouseRules=_additionalHouseRules;
@property(readonly, copy, nonatomic) NSString *houseRules; // @synthesize houseRules=_houseRules;
@property(readonly, copy, nonatomic) NSString *hostCheckInTimePhraseForP4; // @synthesize hostCheckInTimePhraseForP4=_hostCheckInTimePhraseForP4;
@property(readonly, copy, nonatomic) NSString *bathroomLabel; // @synthesize bathroomLabel=_bathroomLabel;
@property(readonly, copy, nonatomic) NSString *bedLabel; // @synthesize bedLabel=_bedLabel;
@property(readonly, copy, nonatomic) NSString *bedroomLabel; // @synthesize bedroomLabel=_bedroomLabel;
@property(readonly, copy, nonatomic) NSString *guestLabel; // @synthesize guestLabel=_guestLabel;
@property(readonly, copy, nonatomic) NSNumber *bathrooms; // @synthesize bathrooms=_bathrooms;
@property(readonly, copy, nonatomic) NSNumber *beds; // @synthesize beds=_beds;
@property(copy, nonatomic) NSNumber *maxNights; // @synthesize maxNights=_maxNights;
@property(readonly, copy, nonatomic) NSNumber *visibleReviewCount; // @synthesize visibleReviewCount=_visibleReviewCount;
@property(readonly, copy, nonatomic) NSNumber *reviewsCount; // @synthesize reviewsCount=_reviewsCount;
@property(copy, nonatomic) NSNumber *minNights; // @synthesize minNights=_minNights;
@property(readonly, copy, nonatomic) NSString *neighborhood; // @synthesize neighborhood=_neighborhood;
@property(readonly, copy, nonatomic) AIRListingPhoto *picture; // @synthesize picture=_picture;
@property(readonly, copy, nonatomic) NSArray *contextualPictures; // @synthesize contextualPictures=_contextualPictures;
@property(readonly, copy, nonatomic) AIRListingConfigurableContent *configurableContent; // @synthesize configurableContent=_configurableContent;
@property(readonly, copy, nonatomic) NSURL *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSURL *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(readonly, copy, nonatomic) NSString *cancelPolicyShortStr; // @synthesize cancelPolicyShortStr=_cancelPolicyShortStr;
@property(readonly, copy, nonatomic) NSArray *availableCancellationPolicies; // @synthesize availableCancellationPolicies=_availableCancellationPolicies;
@property(readonly, copy, nonatomic) NSString *cancellationPolicy; // @synthesize cancellationPolicy=_cancellationPolicy;
@property(readonly, copy, nonatomic) NSNumber *personCapacity; // @synthesize personCapacity=_personCapacity;
@property(readonly, copy, nonatomic) NSNumber *userDefinedLocation; // @synthesize userDefinedLocation=_userDefinedLocation;
@property(readonly, copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(readonly, copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(readonly, copy, nonatomic) NSString *propertyTypeClassification; // @synthesize propertyTypeClassification=_propertyTypeClassification;
@property(readonly, copy, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
@property(readonly, copy, nonatomic) NSString *propertyTypeCategory; // @synthesize propertyTypeCategory=_propertyTypeCategory;
@property(readonly, copy, nonatomic) NSString *propertyTypeGroup; // @synthesize propertyTypeGroup=_propertyTypeGroup;
@property(readonly, copy, nonatomic) NSArray *commonSpacesSharingInfo; // @synthesize commonSpacesSharingInfo=_commonSpacesSharingInfo;
@property(readonly, copy, nonatomic) NSNumber *commonSpacesShared; // @synthesize commonSpacesShared=_commonSpacesShared;
@property(readonly, copy, nonatomic) NSArray *bathroomSharingInfo; // @synthesize bathroomSharingInfo=_bathroomSharingInfo;
@property(readonly, copy, nonatomic) NSString *bathroomType; // @synthesize bathroomType=_bathroomType;
@property(readonly, copy, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
@property(readonly, copy, nonatomic) NSString *bedType; // @synthesize bedType=_bedType;
@property(readonly, copy, nonatomic) NSString *nativeCurrency; // @synthesize nativeCurrency=_nativeCurrency;
@property(readonly, copy, nonatomic) NSNumber *priceNative; // @synthesize priceNative=_priceNative;
@property(readonly, copy, nonatomic) AIRListingDescription *listingDescription; // @synthesize listingDescription=_listingDescription;
@property(readonly, copy, nonatomic) NSString *descriptionLocale; // @synthesize descriptionLocale=_descriptionLocale;
@property(readonly, copy, nonatomic) NSString *nameOrPlaceholderName; // @synthesize nameOrPlaceholderName=_nameOrPlaceholderName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *listingId; // @synthesize listingId=_listingId;
@property(readonly, copy, nonatomic) NSNumber *instantBookable;
- (long long)lysPricingMode;
- (long long)listingStatus;
@property(readonly, copy, nonatomic) AIRUser *primaryHostOrCohost;
- (_Bool)isVisible;
- (id)localizedRoomTypeInCity;
@property(readonly, nonatomic) NSString *trackingId;
- (id)initWithListingId:(id)arg1 isInFriendlyBuildingProgram:(_Bool)arg2 isInLandlordParternship:(_Bool)arg3 listYourSpaceLastFinishedStepId:(id)arg4 countryCode:(id)arg5 unscrubbedName:(id)arg6 lat:(id)arg7 lng:(id)arg8 isAddressEditable:(_Bool)arg9 fullAddress:(id)arg10 fullAddressNative:(id)arg11 stateNative:(id)arg12 cityNative:(id)arg13 streetNative:(id)arg14 state:(id)arg15 city:(id)arg16 street:(id)arg17 apt:(id)arg18 zipcode:(id)arg19 photos:(id)arg20 hasEverBeenAvailable:(_Bool)arg21 lysPricingMode:(long long)arg22 minNights:(id)arg23 maxNights:(id)arg24 checkInTimeEnd:(id)arg25 checkInTimeStart:(id)arg26 photographyStatus:(id)arg27 smartPricingAvailable:(_Bool)arg28 instantBookingAllowedCategory:(id)arg29 roomTypeCategory:(id)arg30 propertyTypeGroup:(id)arg31 bedrooms:(long long)arg32 rooms:(id)arg33 houseRules:(id)arg34 expectations:(id)arg35 checkOutTime:(id)arg36 amenitiesIds:(id)arg37 bathroomType:(id)arg38 bathroomSharingInfo:(id)arg39 beds:(id)arg40 bathrooms:(id)arg41 bathroomSharedWithCategory:(id)arg42 commonSpacesSharingInfo:(id)arg43 commonSpacesShared:(id)arg44 commonSpacesSharedWithCategory:(id)arg45 personCapacity:(id)arg46 propertyTypeCategory:(id)arg47 readyForSelectedStatusValue:(id)arg48 checkInTime:(id)arg49 listingPrice:(id)arg50 listingCurrency:(id)arg51 pictureUrls:(id)arg52 earningsEstimates:(id)arg53;

@end

