// eslint-disable
// this is an auto generated file. This will be overwritten

<<<<<<< HEAD
export const createHero = `mutation CreateHero($input: CreateHeroInput!) {
  createHero(input: $input) {
=======
export const createUser = `mutation CreateUser($input: CreateUserInput!) {
  createUser(input: $input) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
<<<<<<< HEAD
    registered
    createdAt
    updatedAt
    image {
      bucket
      region
      key
    }
    isOnline
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
=======
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const updateUser = `mutation UpdateUser($input: UpdateUserInput!) {
  updateUser(input: $input) {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
      nextToken
    }
    squads {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
    }
  }
}
`;
<<<<<<< HEAD
export const updateHero = `mutation UpdateHero($input: UpdateHeroInput!) {
  updateHero(input: $input) {
=======
export const deleteUser = `mutation DeleteUser($input: DeleteUserInput!) {
  deleteUser(input: $input) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
<<<<<<< HEAD
    registered
    createdAt
    updatedAt
    image {
      bucket
      region
      key
    }
    isOnline
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
=======
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
      nextToken
    }
    squads {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
    }
  }
}
`;
export const deleteHero = `mutation DeleteHero($input: DeleteHeroInput!) {
  deleteHero(input: $input) {
    id
<<<<<<< HEAD
    name
    owner
    registered
    createdAt
    updatedAt
=======
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    image {
      bucket
      region
      key
    }
    isOnline
<<<<<<< HEAD
=======
    honor
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
      }
      nextToken
    }
    squads {
      id
<<<<<<< HEAD
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
      name
      rank
      description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
export const createSquad = `mutation CreateSquad($input: CreateSquadInput!) {
  createSquad(input: $input) {
    id
<<<<<<< HEAD
    owner
    name
    createdAt
    updatedAt
    isRecruiting
    heroes {
      items {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
      id
      name
      owner
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
=======
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
export const updateSquad = `mutation UpdateSquad($input: UpdateSquadInput!) {
  updateSquad(input: $input) {
    id
<<<<<<< HEAD
    owner
    name
    createdAt
    updatedAt
    isRecruiting
    heroes {
      items {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
=======
    user {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      id
      owner
<<<<<<< HEAD
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
=======
      name
      createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
export const deleteSquad = `mutation DeleteSquad($input: DeleteSquadInput!) {
  deleteSquad(input: $input) {
    id
    owner
    name
    createdAt
<<<<<<< HEAD
    updatedAt
    isRecruiting
    heroes {
      items {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
=======
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      id
      name
      owner
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
    }
  }
}
`;
export const createQuest = `mutation CreateQuest($input: CreateQuestInput!) {
  createQuest(input: $input) {
    id
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
<<<<<<< HEAD
    reward
    contact
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
  }
}
`;
export const createSquad = `mutation CreateSquad($input: CreateSquadInput!) {
  createSquad(input: $input) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const updateQuest = `mutation UpdateQuest($input: UpdateQuestInput!) {
  updateQuest(input: $input) {
    id
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
    reward
    contact
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
export const updateSquad = `mutation UpdateSquad($input: UpdateSquadInput!) {
  updateSquad(input: $input) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const deleteQuest = `mutation DeleteQuest($input: DeleteQuestInput!) {
  deleteQuest(input: $input) {
    id
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
    reward
    contact
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
export const deleteSquad = `mutation DeleteSquad($input: DeleteSquadInput!) {
  deleteSquad(input: $input) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const createSkill = `mutation CreateSkill($input: CreateSkillInput!) {
  createSkill(input: $input) {
=======
export const createQuest = `mutation CreateQuest($input: CreateQuestInput!) {
  createQuest(input: $input) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
<<<<<<< HEAD
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
=======
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const updateSkill = `mutation UpdateSkill($input: UpdateSkillInput!) {
  updateSkill(input: $input) {
=======
export const updateQuest = `mutation UpdateQuest($input: UpdateQuestInput!) {
  updateQuest(input: $input) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
<<<<<<< HEAD
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
=======
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const deleteSkill = `mutation DeleteSkill($input: DeleteSkillInput!) {
  deleteSkill(input: $input) {
=======
export const deleteQuest = `mutation DeleteQuest($input: DeleteQuestInput!) {
  deleteQuest(input: $input) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
<<<<<<< HEAD
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
=======
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
