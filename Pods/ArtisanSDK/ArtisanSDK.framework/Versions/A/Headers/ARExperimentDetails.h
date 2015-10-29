//
//  ARExperimentDetails.h
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const DetailDictionaryExperimentNameKey;
extern NSString *const DetailDictionaryExperimentIdKey;
extern NSString *const DetailDictionaryExperimentTypeKey;
extern NSString *const DetailDictionaryCurrentVariationKey;
extern NSString *const DetailDictionaryCurrentVariationIdKey;
extern NSString *const DetailDictionaryCurrentVariationNameKey;

/**
 * An object containing useful information about an experiment
 **/
@interface ARExperimentDetails : NSObject

/**
 * The id of the experiment.
 *
 * The experiment id is a unique identifier for an Artisan experiment.
 */
@property (nonatomic, readonly) NSString *experimentId;

/**
 * The name of the experiment.
 *
 * The experiment name is the same that you would see in Artisan Tools.
 */
@property (nonatomic, readonly) NSString *experimentName;

/**
 * The type of the experiment.
 */
@property (nonatomic, copy) NSString *experimentType;

/**
 * The current variant id for the experiment.
 *
 * The variant id is a unique identifier for the variation of an Artisan Experiment.
 */
@property (nonatomic, copy) NSString *currentVariantId;

/**
 * The current variant name for the experiment.
 *
 * The variant name is the same that you would see in Artisan Tools. Unless the names were edited in Artisan tools they are "Control", "B", "C", etc.
 */
@property (nonatomic, copy) NSString *currentVariantName;

@end
